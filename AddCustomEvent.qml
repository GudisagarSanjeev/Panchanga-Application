import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Window 2.11
Popup {
    id: popupD
    width: parent.width/1.2
    height: parent.height /1.2

    y:  parent.height/4-height/4
    x:parent.width/2.5-width/2.5

    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent
    Rectangle{
        color:"#A7FF83"
        width: parent.width
        height: parent.height
        Column{
            width: parent.width
            height: parent.height
            spacing: parent.height * 0.02
            ComboBox{
                id:combo
                visible: false
                width: parent.width/5
                height:parent.height *0.70
                model:modell
                textRole: "date"
                currentIndex: 0
            }

            Text{
                text:"Add Description"
                color:"maroon"
                font.family: "segoe"
                font.pixelSize: Math.min(parent.height * 0.06,parent.width * 0.1)
            }
            Text{
                id:txt
                text:combo.currentText
                color:"maroon"
                font.family: "segoe"
                font.pixelSize: Math.min(parent.height * 0.06,parent.width * 0.1)
            }
            Rectangle{
                height: parent.height * 0.3
                width: parent.width * 0.6
                border.color:"maroon"

                TextArea{
                    id:field
                    height: parent.height
                    width: parent.width
                }
            }

            Rectangle{
                height: parent.height * 0.08
                width: parent.width * 0.2
                border.color: "maroon"
                radius: 10

                Text{
                    //id:txt
                    anchors.fill: parent
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    text:"Submit"
                    color:"maroon"
                    font.pixelSize: Math.min(parent.height * 0.5,parent.width )
                    MouseArea{
                        anchors.fill: parent
                        onClicked: {
                            if(field.text!=""){
                                emodell.addEventData(txt.text,field.text)
                                field.clear()
                                popupD.close()
                            }else{
                                console.log("Mandatory")
                            }
                        }
                    }
                }
            }
        }
    }
}
