#ifndef QUAZIP_TEST_QUAZIPDIR_H
#define QUAZIP_TEST_QUAZIPDIR_H

/*
Copyright (C) 2005-2014 Sergey A. Tachenov

This file is part of QuaZIP test suite.

QuaZIP is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 2.1 of the License, or
(at your option) any later version.

QuaZIP is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with QuaZIP.  If not, see <http://www.gnu.org/licenses/>.

See COPYING file for the full LGPL text.

Original ZIP package is copyrighted by Gilles Vollant and contributors,
see quazip/(un)zip.h files for details. Basically it's the zlib license.
*/

#include <QObject>

class TestQuaZipDir: public QObject {
    Q_OBJECT
private slots:
    void entryList_data();
    void entryList();
    void cd_data();
    void cd();
    void entryInfoList();
    void operators();
    void filePath();
};

#endif // QUAZIP_TEST_QUAZIPDIR_H
