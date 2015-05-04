Copyright (c) 2014 KoreCoin 2.0 Developers
Copyright (c) 2010-2014 Bitcoin Developers
Distributed under the MIT/X11 software license, see the accompanying
file license.txt or http://www.opensource.org/licenses/mit-license.php.
This product includes software developed by the OpenSSL Project for use in
the OpenSSL Toolkit (http://www.openssl.org/).  This product includes
cryptographic software written by Eric Young (eay@cryptsoft.com).


Intro
-----
KoreCoin is a free open source project derived from NovaCoin, with
the goal of providing a long-term energy-efficient scrypt-based crypto-currency.
Built on the foundation of Bitcoin and NovaCoin, innovations such as proof-of-stake
help further advance the field of crypto-currency.

Setup
-----
After completing Windows setup then run windows command line (cmd)
  cd daemon
  korecoind
You would need to create a configuration file korecoin.conf in the default
wallet directory. Grant access to korecoind.exe in anti-virus and firewall
applications if necessary.

The software automatically finds other nodes to connect to.  You can
enable Universal Plug and Play (UPnP) with your router/firewall
or forward port 12788 (TCP) to your computer so you can receive
incoming connections.  KoreCoin works without incoming connections,
but allowing incoming connections helps the KoreCoin network.

Upgrade
-------
All you existing coins/transactions should be intact with the upgrade.
To upgrade first backup wallet
korecoind backupwallet <destination_backup_file>
Then shutdown korecoind by
korecoind stop
Start up the new korecoind.


See the documentation/wiki at the KoreCoin site:
http://www.korecoin.net
for help and more information.

