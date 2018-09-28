import QtQuick 2.0

Column{
    width: parent.width
    spacing: parent.width * 0.008

    Row{
        width: parent.width
        spacing: parent.width * 0.35
        Text{
            width:parent.width * 0.01;
            text:""
            color:"maroon"
            font.family: "segoe"
            font.pixelSize: parent.width * 0.014
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        Text{
            width:parent.width * 0.01;
            text:eventname
            color:"maroon"
            font.family: "segoe"
            font.pixelSize: parent.width * 0.03
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        Text{
            width:parent.width * 0.01;
            text:date
            color:"maroon"
            font.family: "segoe"
            font.pixelSize: parent.width * 0.03
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
    }
    Row{
        width: parent.width
        height: parent.height * 0.03
        spacing: parent.width * 0.5
        Rectangle{
            width: parent.width
            height: parent.height
            color:"maroon"
        }
    }

}
