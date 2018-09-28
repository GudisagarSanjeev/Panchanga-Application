import QtQuick 2.0

Rectangle{
    width: parent.width * 0.3
    height: parent.height
    property alias text: txt.text
     color:"#A7FF83"
    border.color: "maroon"
    radius: 20
    Text{
        id:txt
        color:"maroon"
        anchors.centerIn: parent
        font.pixelSize: Math.min(parent.height * 0.6,parent.width * 0.2)
    }
}
