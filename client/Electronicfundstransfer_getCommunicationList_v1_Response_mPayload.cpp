/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Electronicfundstransfer_getCommunicationList_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::Electronicfundstransfer_getCommunicationList_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::Electronicfundstransfer_getCommunicationList_v1_Response_mPayload() {
    this->initializeModel();
}

Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::~Electronicfundstransfer_getCommunicationList_v1_Response_mPayload() {}

void Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::initializeModel() {

    m_a_obj_communication_isSet = false;
    m_a_obj_communication_isValid = false;
}

void Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_communication_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_communication, json[QString("a_objCommunication")]);
    m_a_obj_communication_isSet = !json[QString("a_objCommunication")].isNull() && m_a_obj_communication_isValid;
}

QString Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_communication.size() > 0) {
        obj.insert(QString("a_objCommunication"), ::Ezmaxapi::toJsonValue(m_a_obj_communication));
    }
    return obj;
}

QList<Custom_CommunicationListElement_Response> Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::getAObjCommunication() const {
    return m_a_obj_communication;
}
void Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::setAObjCommunication(const QList<Custom_CommunicationListElement_Response> &a_obj_communication) {
    m_a_obj_communication = a_obj_communication;
    m_a_obj_communication_isSet = true;
}

bool Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::is_a_obj_communication_Set() const{
    return m_a_obj_communication_isSet;
}

bool Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::is_a_obj_communication_Valid() const{
    return m_a_obj_communication_isValid;
}

bool Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_communication.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Electronicfundstransfer_getCommunicationList_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_communication_isValid && true;
}

} // namespace Ezmaxapi
