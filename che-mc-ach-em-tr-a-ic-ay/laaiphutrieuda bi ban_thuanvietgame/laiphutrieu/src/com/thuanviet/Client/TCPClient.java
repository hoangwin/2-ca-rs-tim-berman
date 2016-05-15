package com.thuanviet.Client;

import java.io.BufferedReader;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.nio.ByteBuffer;
import java.nio.channels.SocketChannel;

import android.util.Log;

public class TCPClient {

	private String serverMessage;
	public static final String SERVERIP = "210.211.98.73"; // your server IP
															// address
	public static final int SERVERPORT = 7979;
	private OnMessageReceived mMessageListener = null;
	private boolean mRun = false;
	private SocketChannel client;
	String result;

	BufferedReader in;
	InetAddress serverAddr;

	/**
	 * Constructor of the class. OnMessagedReceived listens for the messages
	 * received from server
	 */
	public TCPClient(OnMessageReceived listener) {
		mMessageListener = listener;

		try {
			serverAddr = InetAddress.getByName(SERVERIP);

			// create a socket to make the connection with the server
			// Socket socket = new Socket(serverAddr, SERVERPORT);
			client = SocketChannel.open();
			client.connect(new InetSocketAddress(serverAddr, SERVERPORT));
			Log.e("TCP Client", "C: Connected");
		} catch (Exception e) {
			Log.e("TCP Client", "C: not Conection");
			e.printStackTrace();
		}
	}

	/**
	 * Sends the message entered by client to the server
	 * 
	 * @param message
	 *            text entered by client
	 */
	public void sendMessage(MilMessage message) throws Exception {
		ByteBuffer buff = ByteBuffer.allocate(2048);
		buff.put(message.getTC().getBytes());
		buff.putInt(message.getCode());
		buff.putInt(message.getContent().getBytes().length);
		buff.put(message.getContent().getBytes());
		buff.flip();
		client.write(buff);

	}

	public void stopClient() {
		mRun = false;
	}

	public void run() {

		mRun = true;
		try {
			// here you must put your server's IP address.

			try {
				ByteBuffer buffer = ByteBuffer.allocate(1024 * 1024);
				ByteBuffer bt = ByteBuffer.allocate(1024);
				int iCommand, iLength=0;
				byte[] oper = new byte[2];

				int iLimit = 0;
				int length = 10;
				// send the message to the server
				while (mRun) {
					if (client.isOpen()) {
						client.read(bt);
						bt.position(0);
						buffer.put(bt);
						
						iLimit = buffer.position();
						
						if (iLimit > length) {
							
							buffer.rewind();
							buffer.get(oper);
							iCommand = buffer.getInt();
							iLength = buffer.getInt();
							
							if (iLimit >= iLength + length) {
								
								byte[] btContent = new byte[iLength];
								buffer.get(btContent);
								result = new String(btContent);
								MilMessage msg = new MilMessage();
								msg.setCode(iCommand);
								msg.setContent(result);
								Log.d("INFO", result);
								msg.setTC(new String(oper));
								mMessageListener.messageReceived(msg);
								byte[] bTemp = new byte[iLimit - iLength - length];
								buffer.get(bTemp);
								buffer = ByteBuffer.allocate(1024 * 1024);
								buffer.put(bTemp);
							} else {
								buffer.position(iLimit);
							}
						}
						bt.clear();
					}

					else {
						serverAddr = InetAddress.getByName(SERVERIP);
						client.connect(new InetSocketAddress(serverAddr,
								SERVERPORT));
					}
				}
			} catch (Exception e) {

				Log.e("TCP", "S: Error", e);

			} finally {
				// the socket must be closed. It is not possible to reconnect to
				// this socket
				// after it is closed, which means a new socket instance has to
				// be created.
				client.close();
			}

		} catch (Exception e) {

			Log.e("TCP", "C: Error", e);

		}
	}

	// Declare the interface. The method messageReceived(String message) will
	// must be implemented in the MyActivity
	// class at on asynckTask doInBackground
	public interface OnMessageReceived {

		public void messageReceived(MilMessage message);

	}

	public String getString() {

		return result;

	}

}