#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/tranthanh/cafebot_ws/src/turtlebot_create/create_node"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/tranthanh/cafebot_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/tranthanh/cafebot_ws/install/lib/python2.7/dist-packages:/home/tranthanh/cafebot_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/tranthanh/cafebot_ws/build" \
    "/usr/bin/python" \
    "/home/tranthanh/cafebot_ws/src/turtlebot_create/create_node/setup.py" \
    build --build-base "/home/tranthanh/cafebot_ws/build/turtlebot_create/create_node" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/tranthanh/cafebot_ws/install" --install-scripts="/home/tranthanh/cafebot_ws/install/bin"
