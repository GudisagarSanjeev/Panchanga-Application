import QtQuick 2.0
import QtQuick.Controls 1.4

Row{
    id:view
    width:parent.width;
    spacing: parent.width* 0.14

    Text{
        width:parent.width * 0.01;
        text:""
        font.bold:true
        color:"maroon"
        font.family: "segoe"
        font.pixelSize: parent.width * 0.019
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }
    Text{
        width:parent.width * 0.08;
        text:"☀ " + sunrise
        font.bold:true
        color:"maroon"
        font.family: "segoe"
        font.pixelSize: parent.width * 0.019
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Text{
        width:parent.width * 0.08;
        text:"⛅ " + sunset
        font.bold:true
        color:"maroon"
        font.family: "segoe"
        font.pixelSize: parent.width * 0.019
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Text{
        width:parent.width * 0.08;
        font.bold:true
        text:"📅 "+date
        color:"maroon"
        font.family: "segoe"
        font.pixelSize: parent.width * 0.019
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        MouseArea{
            anchors.fill: parent
            onClicked: {
                cal.visible=true
            }
        }
    }
    Rectangle{
        width:parent.width * 0.08;
        height: parent.width * 0.030
        border.color: "maroon"
        radius:10
        Text{
            text:"Add Event"
            color:"maroon"
            font.family: "segoe"
            font.pixelSize: parent.height * 0.4
            font.bold: true
            anchors.centerIn: parent
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                si.open()
                //homepage.visible=false
            }
        }
    }
    Text{
        width:parent.width * 0.01;
        text:""
        font.bold:true
        color:"maroon"
        font.family: "segoe"
        font.pixelSize: parent.width * 0.019
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

}
