GO_EASY_ON_ME=1

include theos/makefiles/common.mk
ARCHS=arm64 armv7

TWEAK_NAME = SudokuSolver
SudokuSolver_FILES = Tweak.xm
SudokuSolver_FRAMEWORKS = UIKit, CoreGraphics, AVFoundation

include $(THEOS_MAKE_PATH)/tweak.mk

BUNDLE_NAME = sudokuResources
sudokuResources_INSTALL_PATH = /Library/MobileSubstrate/DynamicLibraries

include $(THEOS)/makefiles/bundle.mk

after-install::
	install.exec "killall -9 SpringBoard"
