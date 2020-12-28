
Debian
====================
This directory contains files used to package bitcoinagaind/bitcoinagain-qt
for Debian-based Linux systems. If you compile bitcoinagaind/bitcoinagain-qt yourself, there are some useful files here.

## bitcoinagain: URI support ##


bitcoinagain-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitcoinagain-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitcoinagain-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitcoinagain128.png` to `/usr/share/pixmaps`

bitcoinagain-qt.protocol (KDE)

