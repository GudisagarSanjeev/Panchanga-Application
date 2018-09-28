import QtQuick 2.0
import QtQuick.Controls 1.4

Column{
    id:col
    width: parent.width
    spacing: parent.height * 0.016

    Loader{
        id:load
    }

    Row{
        width: parent.width
        height: parent.height * 0.045
        Rectangle{
            height: parent.height
            width: parent.width
            color:"#A7FF83"

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
                    text:"☀ " + sunrise+" "+ "AM"
                    font.bold:true
                    color:"maroon"
                    font.family: "segoe"
                    font.pixelSize: parent.width * 0.019
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }

                Text{
                    width:parent.width * 0.08;
                    text:"⛅ " + sunset +" "+ "PM"
                    font.bold:true
                    color:"maroon"
                    font.family: "segoe"
                    font.pixelSize: parent.width * 0.019
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }

                Text{
                    id:datetxt
                    width:parent.width * 0.08;
                    font.bold:true
                    text:"📅 "+date
                    color:"maroon"
                    font.family: "segoe"
                    opacity: 1
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
                    height: parent.width * 0.025
                    border.color: "maroon"
                    color:"#A7FF83"
                    radius:10
                    Text{
                        text:qsTr("Add Event")
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

        }
    }
    Row{
        height: parent.height * 0.002
        width: parent.width
        Rectangle{
            height: parent.height
            width: parent.width
            color:"white"
        }
    }
    Row{
        width: parent.width
        InformationPageText{
            width:parent.width/3;
            text:qsTr("Samvastara: Vilambi")
            font.pixelSize: parent.width * 0.022
            color: "black"
            font.bold: false
        }
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }

        InformationPageText{
            text:qsTr("Ayana")
        }
        InformationPageText{
            text:qsTr("Rutu")
        }
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }
        InformationPageText{
            text:ayana
            font.bold: false
        }
        InformationPageText{
            text:rutu
            font.bold: false
        }
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }
        InformationPageText{
            text:qsTr("Masa Niyamaka")
        }
        InformationPageText{
            text:qsTr("Masa")
        }
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }
        InformationPageText{
            text:masan
            font.bold: false
        }
        InformationPageText{
            text:masa
            font.bold: false
        }
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }
        InformationPageText{
            text:qsTr("Paksha")
        }
        InformationPageText{
            text:qsTr("Tithi")
        }
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }
        InformationPageText{
            text:paksha
            font.bold: false
        }
        InformationPageText{
            text:tithi
            font.bold: false
        }
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }
        InformationPageText{  text:qsTr("Vasara")}
        InformationPageText{text:qsTr("Nakshtra")}
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }
        InformationPageText{
            text:vasara
            font.bold: false
        }
        InformationPageText{
            text:nakshatra
            font.bold: false
        }
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }
        InformationPageText{text:qsTr("Yoga")}
        InformationPageText{text:qsTr("Karana")}
    }
    Row{
        width: parent.width
        spacing: parent.width * 0.08
        InformationPageText{
            width:parent.width/8 ;
        }
        InformationPageText{
            text:yoga
            font.bold: false
        }
        InformationPageText{
            text:karana
            font.bold: false
        }
    }
    Row{
        height: parent.height *0.16
        width: parent.width
        ButtonsPage{}
    }

    EventViewPage{
        id:e
    }

}

