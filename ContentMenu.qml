import QtQuick.Controls 2.4
import QtQuick 2.7
Drawer {
    id: menu

    //    x: clickable.mouseX
    //    y: clickable.mouseY


    width: 0.3 * root.width
    height: root.height


    signal specialDayClicked();
    signal galigeClicked();
    signal tarpanaClicked();
    Rectangle{
        anchors.fill: parent
        border.color: "black"
        color:"#A7FF83"
        Column{
            height: parent.height
            width: parent.width
            Rectangle{
                width: parent.width
                height: parent.height *0.03
                color:"#086972"
            }
            Rectangle{
                width: parent.width
                height: parent.height *0.06
                color:"#086972"
                Row{
                    width: parent.width
                    height: parent.height
                    Rectangle{
                        width:parent.width * 0.06
                        height: parent.height
                        color:"#086972"
                    }

                    Image{
                        height: parent.height
                        //anchors.verticalCenter: parent.horizontalCenter
                        width: parent.width * 0.08
                        smooth:true
                        mipmap: true
                        source: "qrc:/Images/leftTop.png"
                        MouseArea{
                            anchors.fill: parent
                            onClicked: {
                                menu.close()
                            }
                        }
                    }
                }
            }
            Rectangle{
                width: parent.width
                height: parent.width * 0.1
                color:"#A7FF83"

            }
            Text{
                text:"    - "+qsTr("Special Days")
                font.family: "segoe"
                font.pixelSize: Math.min(parent.height*0.06,parent.width*0.08)
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                color:"maroon"
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        specialDayClicked()
                        homepage.visible=true
                        menu1.visible=false
                    }
                }

            }
            Rectangle{
                width: parent.width
                height: parent.width * 0.0015
                color:"maroon"
            }
            Rectangle{
                width: parent.width
                height: parent.width * 0.04
                color:"transparent"
            }

            Text{
                text:"    - "+qsTr("Tarpana")
                color:"maroon"
                font.family: "segoe"
                font.pixelSize: Math.min(parent.height*0.06,parent.width*0.08)
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        specialDayClicked()
                        t.visible=true
                        menu1.visible=false
                        //                        smodell.getSpecialDays()
                    }
                }
            }
            Rectangle{
                width: parent.width
                height: parent.width * 0.0015
                color:"maroon"
            }
            Rectangle{
                width: parent.width
                height: parent.width * 0.04
                color:"transparent"
            }
            Text{
                text:"    - "+qsTr("Shubha/Ashubha")
                font.family: "segoe"
                color:"maroon"
                font.pixelSize: Math.min(parent.height*0.06,parent.width*0.08)
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        galigeClicked()
                        galige.visible=true
                        menu1.close()
                        //                        smodell.getSpecialDays()
                    }
                }
            }
            Rectangle{
                width: parent.width
                height: parent.width * 0.0015
                color:"maroon"
            }
            Rectangle{
                width: parent.width
                height: parent.width * 0.04
                color:"transparent"
            }
            Text{
                text:"    - "+qsTr("Change language")
                font.family: "segoe"
                color:"maroon"
                font.pixelSize: Math.min(parent.height*0.06,parent.width*0.08)
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
                MouseArea{
                    id:clickable
                    anchors.fill: parent
                    onClicked: {
                        m.open()
                    }
                }
            }
            Rectangle{
                width: parent.width
                height: parent.width * 0.0015
                color:"maroon"
            }
            Rectangle{
                width: parent.width
                height: parent.width * 0.04
                color:"transparent"
            }
        }

        Menu {
            id:m
            height: parent.height/2
            width: parent.width/1.2
//            x: 500
//            y: 260
            x: parent.width-width * 0.05
            y: parent.height/2-height/4
            background: Rectangle{
                color:"#A7FF83"
            }
            MenuItem {
                id:n
                width: parent.width
                Text{
                    text: "  "+qsTr("English")
                    color:"maroon"
                    font.family: "segoe"
                    font.pixelSize: Math.min(parent.height,parent.width*0.1)
                }
                onTriggered: {
                    translator.selectLanguage("eng")
                    menu.close()
                    m.close()
                }
            }
            MenuSeparator{
                width: parent.width
            }
            MenuItem {
                width: parent.width
                Text{
                    text: "  "+qsTr("Kannada")
                    font.family: "segoe"
                    color:"maroon"
                    font.pixelSize: Math.min(parent.height,parent.width*0.1)
                }
                onTriggered: {
                    translator.selectLanguage("kn")
                    menu.close()
                    m.close()
                }
            }
            MenuSeparator{
                width: parent.width
            }
            MenuItem {
                width: parent.width
                Text{
                    text: "  "+qsTr("Hindi")
                    font.family: "segoe"
                    color:"maroon"
                    font.pixelSize: Math.min(parent.height,parent.width*0.1)
                }
                onTriggered: {
                    translator.selectLanguage("hindi")
                    menu.close()
                    m.close()
                }
            }
            MenuSeparator{
                width: parent.width
            }
            MenuItem {
                width: parent.width
                Text{
                    text: "  "+qsTr("Telugu")
                    font.family: "segoe"
                    color:"maroon"
                    font.pixelSize: Math.min(parent.height,parent.width*0.1)
                }
                onTriggered: {
                    translator.selectLanguage("telugu")
                    menu.close()
                    m.close()
                }
            }
            MenuSeparator{
                width: parent.width
            }
            MenuItem {
                width: parent.width
                Text{
                    text: "  "+qsTr("Tamil")
                    font.family: "segoe"
                    color:"maroon"
                    font.pixelSize: Math.min(parent.height,parent.width*0.1)
                }
                onTriggered: {
                    translator.selectLanguage("tamil")
                    menu.close()
                    m.close()
                }
            }
        }
    }
}
