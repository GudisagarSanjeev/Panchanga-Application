import QtQuick 2.0

Text{
    property alias text: txt.text
    id:txt
    width:parent.width/4 ;
    font.family: "segoe"
    font.pixelSize: parent.width * 0.018
    color:"maroon"
    font.bold: true
    horizontalAlignment: Text.AlignHCenter
    verticalAlignment: Text.AlignVCenter
}
