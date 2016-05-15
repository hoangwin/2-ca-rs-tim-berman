-- phpMyAdmin SQL Dump
-- version 3.5.2.2
-- http://www.phpmyadmin.net
--
-- Host: sql106.byethost10.com
-- Generation Time: Apr 21, 2013 at 10:01 PM
-- Server version: 5.5.27-28.0
-- PHP Version: 5.3.5

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";

--
-- Database: `b10_11763771_GameLeaderBoard`
--

-- --------------------------------------------------------

--
-- Table structure for table `ArmyDefenderGame`
--

CREATE TABLE IF NOT EXISTS `petmonsterpop` (
  `UserName` varchar(100) NOT NULL,
  `Score` int(11) NOT NULL,
  `Level` int(11) NOT NULL,
  `Played` int(11) NOT NULL,
  `Country` int(11) NOT NULL,
  PRIMARY KEY (`UserName`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `ArmyDefenderGame`
--

INSERT INTO `petmonsterpop` (`UserName`, `Score`, `Level`, `Played`, `Country`) VALUES
('Hello', 1, 1, 1, 0),
('aa', 1, 1, 1, 1),
('toanstt', 0, 0, 0, 0),
('nmtoan91', 0, 0, 0, 0),
('hoang.nguyenmau', 571, 0, 0, 0),
('---', 0, 0, 0, 0),
('noname', 1298, 0, 0, 0),
('t9211541', 15, 0, 0, 0),
('richardw', 29, 0, 0, 0),
('martinezraymond673', 207, 0, 0, 0),
('laxdude133', 37, 0, 0, 0),
('chicotiojr', 51, 0, 0, 0),
('pakostree', 215, 0, 0, 0),
('wm1480', 32, 0, 0, 0),
('macias.raymond.69', 125, 0, 0, 0),
('winodsrikantha89', 6, 0, 0, 0),
('smartmobile16', 0, 0, 0, 0),
('toan_stt', 15, 0, 0, 0),
('alisonpamler', 12, 0, 0, 0),
('nurhadi0713', 0, 0, 0, 0),
('lazarickljlewis', 32, 0, 0, 0),
('fannouch2005', 60, 0, 0, 0),
('dmagana743', 45, 0, 0, 0),
('quyendaknong1981', 32, 0, 0, 0),
('ivlac202', 29, 0, 0, 0),
('mrobinson2027', 32, 0, 0, 0),
('aungtunhan666', 196, 0, 0, 0);

//
INSERT INTO `b10_11763771_GameLeaderBoard`.`ArmyDefenderGame` (`UserName`, `Score`, `Level`, `Played`, `Country`) VALUES ('Hello', '1', '1', '1', 'VN');

//


DELETE FROM fruitcuttermaster
WHERE score <100