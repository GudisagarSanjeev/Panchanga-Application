import QtQuick 2.0
import QtQuick.Controls 2.4
import QtQuick.Window 2.11
Popup {
    id: popupD
    width: parent.width/1.8
    height: parent.height /1.2

    y:  parent.height/4-height/4
    x:parent.width/2.2-width/2.5

    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent
    Rectangle{
        id:header
        width: parent.width
        height: parent.height * 0.1
        color:"#086972"
        Row{
            height: parent.height
            width: parent.width
            spacing: parent.width * 0.2
            Text{
                width:parent.width * 0.08;
                text:""
                font.bold:true
                color:"maroon"
                font.family: "segoe"
                font.pixelSize: parent.width * 0.012
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }

            Text{
                text:qsTr("Event name")
                font.bold: true
               color:"#F8FCFB"
                font.family: "segoe"
                font.pixelSize: parent.height * 0.5
            }
            Text{
                text:qsTr("Date")
               color:"#F8FCFB"
                font.bold: true
                font.family: "segoe"
                font.pixelSize: parent.height * 0.5
            }
        }
    }
    Rectangle{
        anchors.top:header.bottom
        width: parent.width
        height: parent.height * 0.9
         color:"#A7FF83"
        ListView{
            width: parent.width
            height: parent.height
            model:emodell
            delegate:EventViewPageDelegate{}
        }
    }

}

