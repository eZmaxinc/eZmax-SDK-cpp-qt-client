/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::~OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload() {}

void OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignbulksendtransmission_isSet = false;
    m_a_obj_ezsignbulksendtransmission_isValid = false;
}

void OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignbulksendtransmission_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignbulksendtransmission, json[QString("a_objEzsignbulksendtransmission")]);
    m_a_obj_ezsignbulksendtransmission_isSet = !json[QString("a_objEzsignbulksendtransmission")].isNull() && m_a_obj_ezsignbulksendtransmission_isValid;
}

QString OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignbulksendtransmission.size() > 0) {
        obj.insert(QString("a_objEzsignbulksendtransmission"), ::OpenAPI::toJsonValue(a_obj_ezsignbulksendtransmission));
    }
    return obj;
}

QList<OAIEzsignbulksendtransmission_ResponseCompound> OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::getAObjEzsignbulksendtransmission() const {
    return a_obj_ezsignbulksendtransmission;
}
void OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::setAObjEzsignbulksendtransmission(const QList<OAIEzsignbulksendtransmission_ResponseCompound> &a_obj_ezsignbulksendtransmission) {
    this->a_obj_ezsignbulksendtransmission = a_obj_ezsignbulksendtransmission;
    this->m_a_obj_ezsignbulksendtransmission_isSet = true;
}

bool OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::is_a_obj_ezsignbulksendtransmission_Set() const{
    return m_a_obj_ezsignbulksendtransmission_isSet;
}

bool OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::is_a_obj_ezsignbulksendtransmission_Valid() const{
    return m_a_obj_ezsignbulksendtransmission_isValid;
}

bool OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignbulksendtransmission.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignbulksendtransmission_isValid && true;
}

} // namespace OpenAPI
