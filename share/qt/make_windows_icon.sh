#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/KoreCoin.ico

convert ../../src/qt/res/icons/KoreCoin-16.png ../../src/qt/res/icons/KoreCoin-32.png ../../src/qt/res/icons/KoreCoin-48.png ${ICON_DST}
