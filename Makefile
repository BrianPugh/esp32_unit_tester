PROJECT_NAME := unit-tester

EXTRA_COMPONENT_DIRS := $(IDF_PATH)/tools/unit-test-app/components 

CFLAGS += -DUNIT_TESTING

include $(IDF_PATH)/make/project.mk

