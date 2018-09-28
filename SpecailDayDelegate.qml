import QtQuick 2.0

Column{
    width: parent.width
    spacing: parent.width * 0.006
    Row{
        width: parent.width
        height: parent.height * 0.03
        Rectangle{
            width: parent.width
            height: parent.height
            color:"white"
        }
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.3
        Text{
            width:parent.width * 0.01;
            text:""
            font.bold:true
            color:"maroon"
            font.family: "segoe"
            font.pixelSize: parent.width * 0.012
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        Text{
            width:parent.width * 0.01;
            text:name
            font.bold:true
            color:"maroon"
            font.family: "segoe"
            font.pixelSize: parent.width * 0.016
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        Text{
            width:parent.width * 0.01;
            text:date
            font.bold:true
            color:"maroon"
            font.family: "segoe"
            font.pixelSize: parent.width * 0.016
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
    }
    Row{
        width: parent.width
        height: parent.height * 0.03
        Rectangle{
            width: parent.width
            height: parent.height
            color:"white"
        }
    }

}
