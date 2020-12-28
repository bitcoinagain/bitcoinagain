// Copyright (c) 2011-2014 The Bitcoinagain Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINAGAIN_QT_BITCOINAGAINADDRESSVALIDATOR_H
#define BITCOINAGAIN_QT_BITCOINAGAINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitcoinagainAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinagainAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Bitcoinagain address widget validator, checks for a valid bitcoinagain address.
 */
class BitcoinagainAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinagainAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOINAGAIN_QT_BITCOINAGAINADDRESSVALIDATOR_H
