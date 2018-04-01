# Setup
Make sure you have esp-idf setup correctly with all the normal paths required
for it to run.

I like to have all my third-party components in a single ``third-party-components``
folder; if you do this, create a symbolic link between the ``components`` folder
in this project and that third-party-components directory. An alternative is to
add that path to the ``EXTRA_COMPONENT_DIRS`` in the Makefile.

In
```
make menuconfig
```
you must specify the included partition table. Also disable
```
Watch CPU0 Idle Task
```
# How to run a unit test
```
make flash TEST_COMPONENTS='${COMPONENT_NAME}' monitor
```

# Sources
Thanks to [mh-dev and his repo](https://github.com/mh-dev/esp32_reusable_components)
for outlining the steps necessary. For some reason
I had to mess with the partition table to get anything working, so I included
those files in this repo. You may have to fiddle with the sdkconfig by running
```
make menuconfig
```
and adjust things such as xtal freq.
