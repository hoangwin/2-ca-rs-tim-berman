-- phpMyAdmin SQL Dump
-- version 4.0.8
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Feb 18, 2014 at 05:36 AM
-- Server version: 5.5.35-cll
-- PHP Version: 5.4.23

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `gamethua_thuanviet`
--

-- --------------------------------------------------------

--
-- Table structure for table `Kill_Flappy`
--

CREATE TABLE IF NOT EXISTS `Kill_Flappy` (
  `UserName` varchar(100) NOT NULL,
  `Score` float NOT NULL,
  `Level` int(11) NOT NULL,
  `Played` int(11) NOT NULL,
  `Country` int(11) NOT NULL,
  PRIMARY KEY (`UserName`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `Kill_Flappy`
--

INSERT INTO `Kill_Flappy` (`UserName`, `Score`, `Level`, `Played`, `Country`) VALUES
('paulo3776', 1, 0, 0, 0),
('KickBack35', 2, 0, 0, 0),
('kristiam2', 3, 0, 0, 0),
('emsons', 4, 0, 0, 0),
('wojtek', 5, 0, 0, 0),
('dovale', 6, 0, 0, 0),
('Manuel', 7, 0, 0, 0),
('hasselbring', 8, 0, 0, 0),
('toanstt', 18, 0, 0, 0),
('MyName', 6, 0, 0, 0),
('duuude', 9, 0, 0, 0),
('malia', 12, 0, 0, 0),
('toanlala', 4, 0, 0, 0),
('Diane', 5, 0, 0, 0),
('kenisha', 37, 0, 0, 0),
('chickennuggets', 0, 0, 0, 0),

('samuel', 5, 0, 0, 0),
('mmmmm', 1, 0, 0, 0);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
