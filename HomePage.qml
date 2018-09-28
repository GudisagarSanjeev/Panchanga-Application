import QtQuick 2.9

Rectangle{
    anchors.fill: parent

    //    Column{
    //        width: parent.width
    //        height: parent.height
    Rectangle{
        id:headerr
        width: parent.width
        height: parent.height * 0.09
       color:"#086972"
        Row{
            height: parent.height
            width:parent.width
            spacing: parent.width * 0.3
            Rectangle{
                height: parent.height
                width: parent.width * 0.12
                  color:"#086972"
                Image{
                    anchors.centerIn: parent
                    height: parent.height/1.2
                    width:parent.width * 0.3
                    smooth: true
                    mipmap:true
                    source: "qrc:/Images/leftTop.png"
                    MouseArea{
                        anchors.fill: parent
                        onClicked: {
                            root.visible=true
                            homepage.visible=false
                        }
                    }
                }
            }

            Text {
                text:qsTr("Special Days")
                font.pixelSize: Math.min(parent.height/1.5,parent.width/8)
                font.family: "segoe"
               color:"#F8FCFB"
                font.bold: true

            }
        }
    }
    Rectangle{
        anchors.top:headerr.bottom
        height: parent.height * 0.91
        width: parent.width
          color:"#A7FF83"

        ListView{
            height: parent.height
            width: parent.width
            anchors.centerIn: parent
            model:smodell
            delegate:SpecailDayDelegate{}
        }


       //            ListView{
        //                height: parent.height
        //                width: parent.width
        //                //anchors.centerIn: parent
        //                model:smodell
        //                delegate:SpecailDayDelegate{}
        //            }
    }
}
//}




