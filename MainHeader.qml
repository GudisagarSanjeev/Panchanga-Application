import QtQuick 2.0

Rectangle{
    width: parent.width
    height: parent.height
    color:"#086972"
    property alias menu1: menu1
    Row{
        anchors.fill: parent
        spacing: parent.width * 0.25
        Rectangle{
            height: parent.height
            width: parent.width * 0.12
            color:"transparent"
            Image{
                anchors.centerIn: parent
                height: parent.height/2
                width: parent.width * 0.25
                smooth: true
                source: "qrc:/Images/menu.png"
                MouseArea{
                    id:clickable
                    anchors.fill:parent
                    onClicked: {
                            menu1.open()
                    }
                }
            }
        }

        Text {
            text:qsTr("UM Panchanga")
            font.pixelSize: Math.min(parent.height/1.5,parent.width/8)
            font.family: "segoe"
            color:"#F8FCFB"
            font.bold: true

        }
    }
    ContentMenu{
        id:menu1
    }
}
