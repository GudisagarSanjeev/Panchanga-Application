import QtQuick 2.9

Rectangle {
    height: parent.height
    width: parent.width
    ListView{
        height: parent.height
        width: parent.width
        model:modell
        delegate:SunInformationDelegate{}
    }

    AddCustomEvent{
        id:si
        visible: false
    }
}

