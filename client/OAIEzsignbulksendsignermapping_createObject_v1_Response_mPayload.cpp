/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::~OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload() {}

void OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_ezsignbulksendsignermapping_id_isSet = false;
    m_a_pki_ezsignbulksendsignermapping_id_isValid = false;
}

void OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsignbulksendsignermapping_id_isValid = ::OpenAPI::fromJsonValue(a_pki_ezsignbulksendsignermapping_id, json[QString("a_pkiEzsignbulksendsignermappingID")]);
    m_a_pki_ezsignbulksendsignermapping_id_isSet = !json[QString("a_pkiEzsignbulksendsignermappingID")].isNull() && m_a_pki_ezsignbulksendsignermapping_id_isValid;
}

QString OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_pki_ezsignbulksendsignermapping_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignbulksendsignermappingID"), ::OpenAPI::toJsonValue(a_pki_ezsignbulksendsignermapping_id));
    }
    return obj;
}

QList<qint32> OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::getAPkiEzsignbulksendsignermappingId() const {
    return a_pki_ezsignbulksendsignermapping_id;
}
void OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::setAPkiEzsignbulksendsignermappingId(const QList<qint32> &a_pki_ezsignbulksendsignermapping_id) {
    this->a_pki_ezsignbulksendsignermapping_id = a_pki_ezsignbulksendsignermapping_id;
    this->m_a_pki_ezsignbulksendsignermapping_id_isSet = true;
}

bool OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::is_a_pki_ezsignbulksendsignermapping_id_Set() const{
    return m_a_pki_ezsignbulksendsignermapping_id_isSet;
}

bool OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::is_a_pki_ezsignbulksendsignermapping_id_Valid() const{
    return m_a_pki_ezsignbulksendsignermapping_id_isValid;
}

bool OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_pki_ezsignbulksendsignermapping_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsignbulksendsignermapping_id_isValid && true;
}

} // namespace OpenAPI
