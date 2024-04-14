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

#include "Ezsignsignature_createObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsignature_createObject_v2_Response_mPayload::Ezsignsignature_createObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsignature_createObject_v2_Response_mPayload::Ezsignsignature_createObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsignsignature_createObject_v2_Response_mPayload::~Ezsignsignature_createObject_v2_Response_mPayload() {}

void Ezsignsignature_createObject_v2_Response_mPayload::initializeModel() {

    m_a_pki_ezsignsignature_id_isSet = false;
    m_a_pki_ezsignsignature_id_isValid = false;
}

void Ezsignsignature_createObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsignature_createObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsignsignature_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_ezsignsignature_id, json[QString("a_pkiEzsignsignatureID")]);
    m_a_pki_ezsignsignature_id_isSet = !json[QString("a_pkiEzsignsignatureID")].isNull() && m_a_pki_ezsignsignature_id_isValid;
}

QString Ezsignsignature_createObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsignature_createObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_ezsignsignature_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignsignatureID"), ::Ezmaxapi::toJsonValue(m_a_pki_ezsignsignature_id));
    }
    return obj;
}

QList<qint32> Ezsignsignature_createObject_v2_Response_mPayload::getAPkiEzsignsignatureId() const {
    return m_a_pki_ezsignsignature_id;
}
void Ezsignsignature_createObject_v2_Response_mPayload::setAPkiEzsignsignatureId(const QList<qint32> &a_pki_ezsignsignature_id) {
    m_a_pki_ezsignsignature_id = a_pki_ezsignsignature_id;
    m_a_pki_ezsignsignature_id_isSet = true;
}

bool Ezsignsignature_createObject_v2_Response_mPayload::is_a_pki_ezsignsignature_id_Set() const{
    return m_a_pki_ezsignsignature_id_isSet;
}

bool Ezsignsignature_createObject_v2_Response_mPayload::is_a_pki_ezsignsignature_id_Valid() const{
    return m_a_pki_ezsignsignature_id_isValid;
}

bool Ezsignsignature_createObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_ezsignsignature_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsignature_createObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsignsignature_id_isValid && true;
}

} // namespace Ezmaxapi
