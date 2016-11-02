CREATE TABLE IF NOT EXISTS `users` (
`id` int(11) NOT NULL,
  `name` varchar(100) COLLATE utf8_unicode_ci NOT NULL,
  `email` varchar(100) COLLATE utf8_unicode_ci NOT NULL,
  `phone` varchar(15) COLLATE utf8_unicode_ci NOT NULL,
  `created` datetime NOT NULL,
  `modified` datetime NOT NULL,
  `status` enum('1','0') COLLATE utf8_unicode_ci NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `name`, `email`, `phone`, `created`, `modified`, `status`) VALUES
(1, '	Barack Obama', 'barack@gmail.com', '6666666666', '2016-07-13 08:23:23', '2016-07-13 08:23:23', '1'),
(2, 'Bill Gates', 'bill@gmail.com', '8888888888', '2016-07-12 08:23:23', '2016-07-12 08:23:23', '1'),
(3, 'Narendra Modi', 'narendra@gmail.com', '1234321564', '2016-07-14 08:23:23', '2016-07-14 08:23:23', '1'),
(4, 'Larry Page', 'larry@gmail.com', '9999999999', '2016-07-10 08:23:23', '2016-07-10 08:23:23', '0'),
(5, 'Jeff Bezos', 'jeff@gmail.com', '9898899889', '2016-07-09 08:23:23', '2016-07-09 08:23:23', '1'),
(6, '	Mark Zuckerberg', 'mark@gmail.com', '7777777777', '2016-06-28 08:23:23', '2016-06-28 08:23:23', '0');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `users`
--
ALTER TABLE `users`
ADD PRIMARY KEY (`id`);
