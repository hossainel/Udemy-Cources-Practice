-- phpMyAdmin SQL Dump
-- version 5.1.3
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: May 13, 2022 at 11:03 PM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 7.4.28

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `test`
--

-- --------------------------------------------------------

--
-- Table structure for table `madrash_table`
--

CREATE TABLE `madrash_table` (
  `id` int(11) NOT NULL,
  `class_name` varchar(50) NOT NULL,
  `student_name` varchar(150) NOT NULL,
  `student_info` text NOT NULL,
  `add_date` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `madrash_table`
--

INSERT INTO `madrash_table` (`id`, `class_name`, `student_name`, `student_info`, `add_date`) VALUES
(1, 'five', 'Toskir', '{\"roll\":\"5\", \"section\":\"A\"}', '2022-05-13 18:36:29'),
(2, 'four', 'Hasna', '{\"roll\":\"2\", \"section\":\"A\"}', '2022-05-13 18:36:29'),
(3, 'five', 'Tasin', '{\"roll\":\"2\", \"section\":\"A\"}', '2022-05-13 18:37:14'),
(4, 'four', 'Kamal', '{\"roll\":\"3\", \"section\":\"A\"}', '2022-05-13 18:37:14');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `madrash_table`
--
ALTER TABLE `madrash_table`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `madrash_table`
--
ALTER TABLE `madrash_table`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
