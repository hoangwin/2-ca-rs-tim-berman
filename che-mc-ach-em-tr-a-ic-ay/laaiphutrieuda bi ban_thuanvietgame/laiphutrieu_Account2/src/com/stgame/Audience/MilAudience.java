package com.stgame.Audience;

import java.util.ArrayList;

import org.afree.chart.AFreeChart;
import org.afree.chart.ChartFactory;
import org.afree.chart.axis.CategoryAxis;
import org.afree.chart.axis.CategoryLabelPositions;
import org.afree.chart.axis.NumberAxis;
import org.afree.chart.plot.CategoryPlot;
import org.afree.chart.plot.PlotOrientation;
import org.afree.chart.renderer.category.BarRenderer;
import org.afree.data.category.CategoryDataset;
import org.afree.data.category.DefaultCategoryDataset;
import org.afree.graphics.GradientColor;
import org.afree.graphics.SolidColor;

import com.stgame.Help.Mil50;

import android.content.Context;
import android.graphics.Color;

public class MilAudience extends DemoView {

	int answer;
	int level;
	boolean boolean1;
	Mil50 mil50;

	public MilAudience(Context context, int answer, int level, Mil50 mil50) {
		super(context);
		this.answer = answer;
		this.level = level;
		this.mil50 = mil50;
		CategoryDataset dataset = createDataset();
		AFreeChart chart = createChart(dataset);
		setChart(chart);
	}

	/**
	 * Returns a sample dataset.
	 * 
	 * @return The dataset.
	 */
	private CategoryDataset createDataset() {

		// row keys...
		String series1 = "First";

		// column keys...
		ArrayList<String> audience2 = new ArrayList<String>();
		audience2.add("A");
		audience2.add("B");
		audience2.add("C");
		audience2.add("D");

		boolean[] avai = mil50.getPlan();

		ArrayList<Integer> audience = new ArrayList<Integer>();
		int[] audi = customRandom(answer, level, avai);
		audience.add(audi[0]);
		audience.add(audi[1]);
		audience.add(audi[2]);
		audience.add(audi[3]);

		// create the dataset...
		DefaultCategoryDataset dataset = new DefaultCategoryDataset();

		dataset.addValue(audience.get(0), series1, "A");
		dataset.addValue(audience.get(1), series1, "B");
		dataset.addValue(audience.get(2), series1, "C");
		dataset.addValue(audience.get(3), series1, "D");

		return dataset;

	}

	/**
	 * Creates a sample chart.
	 * 
	 * @param dataset
	 *            the dataset.
	 * 
	 * @return The chart.
	 */
	private static AFreeChart createChart(CategoryDataset dataset) {

		// create the chart...
		AFreeChart chart = ChartFactory.createBarChart(
				"Tỉ lệ khán giả lựa chọn", // chart
				// title
				"Các phương án lựa chọn", // domain axis label
				null, // range axis label
				dataset, // data
				PlotOrientation.VERTICAL, // orientation
				false, // include legend
				true, // tooltips?
				false // URLs?
				);

		// NOW DO SOME OPTIONAL CUSTOMISATION OF THE CHART...

		// set the background color for the chart...
		chart.setBackgroundPaintType(new SolidColor(Color.WHITE));

		// get a reference to the plot for further customisation...
		CategoryPlot plot = (CategoryPlot) chart.getPlot();

		// set the range axis to display integers only...
		NumberAxis rangeAxis = (NumberAxis) plot.getRangeAxis();
		rangeAxis.setStandardTickUnits(NumberAxis.createIntegerTickUnits());

		// disable bar outlines...
		BarRenderer renderer = (BarRenderer) plot.getRenderer();
		renderer.setDrawBarOutline(false);

		// set up gradient paints for series...
		GradientColor gp0 = new GradientColor(Color.BLUE, Color.rgb(0, 0, 164));
		GradientColor gp1 = new GradientColor(Color.GREEN, Color.rgb(0, 164, 0));
		GradientColor gp2 = new GradientColor(Color.RED, Color.rgb(164, 0, 0));
		renderer.setSeriesPaintType(0, gp0);
		renderer.setSeriesPaintType(1, gp1);
		renderer.setSeriesPaintType(2, gp2);

		CategoryAxis domainAxis = plot.getDomainAxis();
		domainAxis.setCategoryLabelPositions(CategoryLabelPositions
				.createUpRotationLabelPositions(Math.PI / 6.0));
		// OPTIONAL CUSTOMISATION COMPLETED.

		return chart;

	}

	public int[] customRandom(int answer, int level, boolean[] avai) {

		int[] percent;

		int random, i, sum = 0, number = 0, max, min;
		percent = new int[4];
		max = 104 - level * 4;
		min = 42 - level * 2;
		random = min + (int) (Math.random() * ((max - min) + 1));
		sum = 100 - random;
		boolean temp = false;
		for (int j = 0; j < avai.length; j++) {
			if (avai[j] == false) {
				temp = true;
				break;
			}
		}

		if (temp) {
			for (i = 1; i < 5; i++) {
				if (i == answer) {
					percent[i - 1] = random;
				} else {
					if (avai[i - 1] == false) {
						percent[i - 1] = 0;
					} else {
						percent[i - 1] = sum;
					}
				}
			}
		} else {
			for (i = 1; i < 5; i++) {
				if (i == answer)
					percent[i - 1] = random;
				else {
					if (number >= 2) {
						percent[i - 1] = sum;
					} else {
						percent[i - 1] = (int) (Math.random() * (sum + 1));
						sum = sum - percent[i - 1];
						number++;
					}
				}
			}
		}
		return percent;
	}
}
