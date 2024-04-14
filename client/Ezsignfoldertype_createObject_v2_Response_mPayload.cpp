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

#include "Ezsignfoldertype_createObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfoldertype_createObject_v2_Response_mPayload::Ezsignfoldertype_createObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfoldertype_createObject_v2_Response_mPayload::Ezsignfoldertype_createObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsignfoldertype_createObject_v2_Response_mPayload::~Ezsignfoldertype_createObject_v2_Response_mPayload() {}

void Ezsignfoldertype_createObject_v2_Response_mPayload::initializeModel() {

    m_a_pki_ezsignfoldertype_id_isSet = false;
    m_a_pki_ezsignfoldertype_id_isValid = false;
}

void Ezsignfoldertype_createObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfoldertype_createObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_ezsignfoldertype_id, json[QString("a_pkiEzsignfoldertypeID")]);
    m_a_pki_ezsignfoldertype_id_isSet = !json[QString("a_pkiEzsignfoldertypeID")].isNull() && m_a_pki_ezsignfoldertype_id_isValid;
}

QString Ezsignfoldertype_createObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfoldertype_createObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_ezsignfoldertype_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_a_pki_ezsignfoldertype_id));
    }
    return obj;
}

QList<qint32> Ezsignfoldertype_createObject_v2_Response_mPayload::getAPkiEzsignfoldertypeId() const {
    return m_a_pki_ezsignfoldertype_id;
}
void Ezsignfoldertype_createObject_v2_Response_mPayload::setAPkiEzsignfoldertypeId(const QList<qint32> &a_pki_ezsignfoldertype_id) {
    m_a_pki_ezsignfoldertype_id = a_pki_ezsignfoldertype_id;
    m_a_pki_ezsignfoldertype_id_isSet = true;
}

bool Ezsignfoldertype_createObject_v2_Response_mPayload::is_a_pki_ezsignfoldertype_id_Set() const{
    return m_a_pki_ezsignfoldertype_id_isSet;
}

bool Ezsignfoldertype_createObject_v2_Response_mPayload::is_a_pki_ezsignfoldertype_id_Valid() const{
    return m_a_pki_ezsignfoldertype_id_isValid;
}

bool Ezsignfoldertype_createObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_ezsignfoldertype_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfoldertype_createObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsignfoldertype_id_isValid && true;
}

} // namespace Ezmaxapi
