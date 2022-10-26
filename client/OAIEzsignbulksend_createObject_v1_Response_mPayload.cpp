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

#include "OAIEzsignbulksend_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksend_createObject_v1_Response_mPayload::OAIEzsignbulksend_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_createObject_v1_Response_mPayload::OAIEzsignbulksend_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignbulksend_createObject_v1_Response_mPayload::~OAIEzsignbulksend_createObject_v1_Response_mPayload() {}

void OAIEzsignbulksend_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_ezsignbulksend_id_isSet = false;
    m_a_pki_ezsignbulksend_id_isValid = false;
}

void OAIEzsignbulksend_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsignbulksend_id_isValid = ::OpenAPI::fromJsonValue(a_pki_ezsignbulksend_id, json[QString("a_pkiEzsignbulksendID")]);
    m_a_pki_ezsignbulksend_id_isSet = !json[QString("a_pkiEzsignbulksendID")].isNull() && m_a_pki_ezsignbulksend_id_isValid;
}

QString OAIEzsignbulksend_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_pki_ezsignbulksend_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignbulksendID"), ::OpenAPI::toJsonValue(a_pki_ezsignbulksend_id));
    }
    return obj;
}

QList<qint32> OAIEzsignbulksend_createObject_v1_Response_mPayload::getAPkiEzsignbulksendId() const {
    return a_pki_ezsignbulksend_id;
}
void OAIEzsignbulksend_createObject_v1_Response_mPayload::setAPkiEzsignbulksendId(const QList<qint32> &a_pki_ezsignbulksend_id) {
    this->a_pki_ezsignbulksend_id = a_pki_ezsignbulksend_id;
    this->m_a_pki_ezsignbulksend_id_isSet = true;
}

bool OAIEzsignbulksend_createObject_v1_Response_mPayload::is_a_pki_ezsignbulksend_id_Set() const{
    return m_a_pki_ezsignbulksend_id_isSet;
}

bool OAIEzsignbulksend_createObject_v1_Response_mPayload::is_a_pki_ezsignbulksend_id_Valid() const{
    return m_a_pki_ezsignbulksend_id_isValid;
}

bool OAIEzsignbulksend_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_pki_ezsignbulksend_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsignbulksend_id_isValid && true;
}

} // namespace OpenAPI
