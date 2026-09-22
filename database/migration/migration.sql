-- Migration script for creating all missing tables
-- Target database: s_1511HEXAGON
-- Run this script after connecting to the target database

-- ---------------------------------------------------------------------
-- MISSING TABLES FROM ERROR LOG
-- ---------------------------------------------------------------------

-- Table: garbages
CREATE TABLE IF NOT EXISTS `garbages` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: shops
CREATE TABLE IF NOT EXISTS `shops` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: biz
CREATE TABLE IF NOT EXISTS `biz` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(25) NOT NULL DEFAULT '-',
  `OwnerID` int(10) UNSIGNED NOT NULL DEFAULT 0,
  `OwnerName` varchar(25) NOT NULL DEFAULT '',
  `Locked` tinyint(3) UNSIGNED NOT NULL DEFAULT 0,
  `Money` int(10) UNSIGNED NOT NULL DEFAULT 0,
  `Type` int(10) UNSIGNED NOT NULL DEFAULT 0,
  `Price` int(10) UNSIGNED NOT NULL DEFAULT 1000,
  `Fee` int(10) UNSIGNED NOT NULL DEFAULT 500,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `A` float NOT NULL DEFAULT 0,
  `ExtVw` int(10) UNSIGNED NOT NULL DEFAULT 0,
  `ExtInt` int(10) UNSIGNED NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: fivem_labels
CREATE TABLE IF NOT EXISTS `fivem_labels` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(64) DEFAULT '',
  `X` float DEFAULT 0,
  `Y` float DEFAULT 0,
  `Z` float DEFAULT 0,
  `World` int(11) DEFAULT 0,
  `Interior` int(11) DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: public_garages
CREATE TABLE IF NOT EXISTS `public_garages` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: rentals
CREATE TABLE IF NOT EXISTS `rentals` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  `Price` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: bankpoints
CREATE TABLE IF NOT EXISTS `bankpoints` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: vendings
CREATE TABLE IF NOT EXISTS `vendings` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: robberies
CREATE TABLE IF NOT EXISTS `robberies` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  `State` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: mapicons
CREATE TABLE IF NOT EXISTS `mapicons` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  `Color` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: houses
CREATE TABLE IF NOT EXISTS `houses` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(64) DEFAULT '',
  `OwnerID` int(11) DEFAULT 0,
  `OwnerName` varchar(64) DEFAULT '',
  `Password` varchar(64) DEFAULT '',
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `A` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Price` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: rusun
CREATE TABLE IF NOT EXISTS `rusun` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(64) DEFAULT '',
  `OwnerID` int(11) DEFAULT 0,
  `OwnerName` varchar(64) DEFAULT '',
  `Password` varchar(64) DEFAULT '',
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `A` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Price` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: basement
CREATE TABLE IF NOT EXISTS `basement` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(50) DEFAULT 'None',
  `password` varchar(50) DEFAULT '',
  `icon` int(11) DEFAULT 19130,
  `locked` int(11) NOT NULL DEFAULT 0,
  `admin` int(11) NOT NULL DEFAULT 0,
  `vip` int(11) NOT NULL DEFAULT 0,
  `faction` int(11) NOT NULL DEFAULT 0,
  `family` int(11) NOT NULL DEFAULT -1,
  `extvw` int(11) DEFAULT 0,
  `extint` int(11) DEFAULT 0,
  `extposx` float DEFAULT 0,
  `extposy` float DEFAULT 0,
  `extposz` float DEFAULT 0,
  `extposa` float DEFAULT 0,
  `intvw` int(11) DEFAULT 0,
  `intint` int(11) NOT NULL DEFAULT 0,
  `intposx` float DEFAULT 0,
  `intposy` float DEFAULT 0,
  `intposz` float DEFAULT 0,
  `intposa` float DEFAULT 0,
  `inexitx` float DEFAULT 0,
  `inexity` float DEFAULT 0,
  `inexitz` float DEFAULT 0,
  `outexitx` float DEFAULT 0,
  `outexity` float DEFAULT 0,
  `outexitz` float DEFAULT 0,
  `outexita` float DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- Table: kanabis
CREATE TABLE IF NOT EXISTS `kanabis` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: dynamic_deer
CREATE TABLE IF NOT EXISTS `dynamic_deer` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float DEFAULT 0,
  `Y` float DEFAULT 0,
  `Z` float DEFAULT 0,
  `RX` float DEFAULT 0,
  `RY` float DEFAULT 0,
  `RZ` float DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: xmas_trees
CREATE TABLE IF NOT EXISTS `xmas_trees` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: dropped_items
CREATE TABLE IF NOT EXISTS `dropped_items` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `itemName` varchar(32) DEFAULT NULL,
  `itemModel` int(11) DEFAULT 0,
  `itemX` float DEFAULT 0,
  `itemY` float DEFAULT 0,
  `itemZ` float DEFAULT 0,
  `itemInt` int(11) DEFAULT 0,
  `itemWorld` int(11) DEFAULT 0,
  `itemQuantity` int(11) DEFAULT 0,
  `itemAmmo` int(11) DEFAULT 0,
  `itemWeapon` int(11) DEFAULT 0,
  `itemPlayer` varchar(24) DEFAULT NULL,
  `itemTime` bigint(20) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- Table: lockers
CREATE TABLE IF NOT EXISTS `lockers` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  `OwnerID` int(11) DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: fcrafts
CREATE TABLE IF NOT EXISTS `fcrafts` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: armouries
CREATE TABLE IF NOT EXISTS `armouries` (
  `id` int(12) NOT NULL AUTO_INCREMENT,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `interior` int(12) DEFAULT 0,
  `world` int(12) DEFAULT 0,
  `name` varchar(64) DEFAULT '',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: vaults
CREATE TABLE IF NOT EXISTS `vaults` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  `Password` varchar(64) DEFAULT '',
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: faction_garages
CREATE TABLE IF NOT EXISTS `faction_garages` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `FactionID` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: roadsigns
CREATE TABLE IF NOT EXISTS `roadsigns` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Text` varchar(256) DEFAULT '',
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: speedcam
CREATE TABLE IF NOT EXISTS `speedcam` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: server_tags
CREATE TABLE IF NOT EXISTS `server_tags` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `Tag` varchar(128) NOT NULL,
  `Value` varchar(256) DEFAULT '',
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: faction_brankas
CREATE TABLE IF NOT EXISTS `faction_brankas` (
  `FMID` int(11) DEFAULT 0,
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `Item` varchar(32) DEFAULT NULL,
  `Model` int(11) DEFAULT 0,
  `Quantity` int(11) DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

-- Table: bj_tables
CREATE TABLE IF NOT EXISTS `bj_tables` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `RX` float NOT NULL DEFAULT 0,
  `RY` float NOT NULL DEFAULT 0,
  `RZ` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `MinBet` bigint(32) NOT NULL DEFAULT 10000,
  `MaxBet` bigint(32) NOT NULL DEFAULT 50000,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- Table: farmplants
CREATE TABLE IF NOT EXISTS `farmplants` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `X` float NOT NULL DEFAULT 0,
  `Y` float NOT NULL DEFAULT 0,
  `Z` float NOT NULL DEFAULT 0,
  `World` int(11) NOT NULL DEFAULT 0,
  `Interior` int(11) NOT NULL DEFAULT 0,
  `Type` int(11) NOT NULL DEFAULT 0,
  `GrowthStage` int(11) NOT NULL DEFAULT 0,
  `State` int(11) NOT NULL DEFAULT 0,
  `PlayerID` int(11) DEFAULT 0,
  `watered` tinyint(1) NOT NULL DEFAULT 0,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- ---------------------------------------------------------------------
-- END OF MIGRATION
-- ---------------------------------------------------------------------