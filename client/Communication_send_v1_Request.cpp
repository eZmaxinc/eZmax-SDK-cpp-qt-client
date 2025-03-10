/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Communication_send_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Communication_send_v1_Request::Communication_send_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Communication_send_v1_Request::Communication_send_v1_Request() {
    this->initializeModel();
}

Communication_send_v1_Request::~Communication_send_v1_Request() {}

void Communication_send_v1_Request::initializeModel() {

    m_a_obj_communication_isSet = false;
    m_a_obj_communication_isValid = false;
}

void Communication_send_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Communication_send_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_communication_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_communication, json[QString("a_objCommunication")]);
    m_a_obj_communication_isSet = !json[QString("a_objCommunication")].isNull() && m_a_obj_communication_isValid;
}

QString Communication_send_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Communication_send_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_communication.size() > 0) {
        obj.insert(QString("a_objCommunication"), ::Ezmaxapi::toJsonValue(m_a_obj_communication));
    }
    return obj;
}

QList<Communication_RequestCompound> Communication_send_v1_Request::getAObjCommunication() const {
    return m_a_obj_communication;
}
void Communication_send_v1_Request::setAObjCommunication(const QList<Communication_RequestCompound> &a_obj_communication) {
    m_a_obj_communication = a_obj_communication;
    m_a_obj_communication_isSet = true;
}

bool Communication_send_v1_Request::is_a_obj_communication_Set() const{
    return m_a_obj_communication_isSet;
}

bool Communication_send_v1_Request::is_a_obj_communication_Valid() const{
    return m_a_obj_communication_isValid;
}

bool Communication_send_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_communication.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Communication_send_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_communication_isValid && true;
}

} // namespace Ezmaxapi
