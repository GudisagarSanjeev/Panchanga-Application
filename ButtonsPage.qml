import QtQuick 2.9
import QtQuick.Controls 1.4

Column {
    height: parent.height
    width: parent.width
    spacing: parent.height * 0.07
    //    color:"pink"
    property var today

    Row{
        height: parent.height * 0.68
        width: parent.width
        //spacing: parent.width * 0.045

        Rectangle{
            width: parent.width * 0.126
            height: parent.height
            color:"transparent"
        }
        Image{
              width: parent.width * 0.05
            height: parent.height
            mipmap: true
            source: "qrc:/Images/left.png"
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    modell.previousDate()
                }
            }
        }
        Rectangle{
            width: parent.width *0.3
            height: parent.height
            color:"transparent"
            Rectangle{
                height: parent.height*0.02
                width: parent.width
                color:"white"
                anchors.centerIn: parent
            }
        }
        Image{
              width: parent.width * 0.05
            height: parent.height
            mipmap: true
            source: "qrc:/Images/circularbutton.png"
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    modell.currentDate()
                }
            }
        }

        Rectangle{
            width: parent.width *0.3
            height: parent.height
            color:"transparent"
            Rectangle{
                height: parent.height*0.02
                width: parent.width
                color:"white"
                anchors.centerIn: parent
            }
        }
        Image{
              width: parent.width * 0.05
            height: parent.height
            mipmap: true
            source: "qrc:/Images/rigthArrow.png"
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    modell.nextDate();
                }
            }
        }
    }

    Row{
        height: parent.height * 0.5
        width: parent.width
        Rectangle{
            width: parent.width
            height: parent.height
            color:"#A7FF83"
            ComboBox{
                id:combo
                visible: false
                width: parent.width/5
                height:parent.height *0.70
                model:modell
                textRole: "date"
                currentIndex: 0
            }
            ButtonsDesignPage{
                anchors.centerIn: parent
                text:qsTr("Events on")+"  " + date
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        emodell.viewData1(combo.currentText);
                        e.open()

                    }
                }
            }
        }
    }
}
