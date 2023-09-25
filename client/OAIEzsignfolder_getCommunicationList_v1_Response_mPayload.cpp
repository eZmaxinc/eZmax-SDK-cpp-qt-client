/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_getCommunicationList_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::OAIEzsignfolder_getCommunicationList_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::OAIEzsignfolder_getCommunicationList_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::~OAIEzsignfolder_getCommunicationList_v1_Response_mPayload() {}

void OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::initializeModel() {

    m_a_obj_communication_isSet = false;
    m_a_obj_communication_isValid = false;
}

void OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_communication_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_communication, json[QString("a_objCommunication")]);
    m_a_obj_communication_isSet = !json[QString("a_objCommunication")].isNull() && m_a_obj_communication_isValid;
}

QString OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_communication.size() > 0) {
        obj.insert(QString("a_objCommunication"), ::Ezmaxapi::toJsonValue(m_a_obj_communication));
    }
    return obj;
}

QList<OAICustom_CommunicationListElement_Response> OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::getAObjCommunication() const {
    return m_a_obj_communication;
}
void OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::setAObjCommunication(const QList<OAICustom_CommunicationListElement_Response> &a_obj_communication) {
    m_a_obj_communication = a_obj_communication;
    m_a_obj_communication_isSet = true;
}

bool OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::is_a_obj_communication_Set() const{
    return m_a_obj_communication_isSet;
}

bool OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::is_a_obj_communication_Valid() const{
    return m_a_obj_communication_isValid;
}

bool OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_communication.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_getCommunicationList_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_communication_isValid && true;
}

} // namespace Ezmaxapi
