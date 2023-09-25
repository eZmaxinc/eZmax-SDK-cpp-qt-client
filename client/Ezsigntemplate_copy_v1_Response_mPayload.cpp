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

#include "Ezsigntemplate_copy_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplate_copy_v1_Response_mPayload::Ezsigntemplate_copy_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplate_copy_v1_Response_mPayload::Ezsigntemplate_copy_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsigntemplate_copy_v1_Response_mPayload::~Ezsigntemplate_copy_v1_Response_mPayload() {}

void Ezsigntemplate_copy_v1_Response_mPayload::initializeModel() {

    m_a_pki_ezsigntemplate_id_isSet = false;
    m_a_pki_ezsigntemplate_id_isValid = false;
}

void Ezsigntemplate_copy_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplate_copy_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_ezsigntemplate_id, json[QString("a_pkiEzsigntemplateID")]);
    m_a_pki_ezsigntemplate_id_isSet = !json[QString("a_pkiEzsigntemplateID")].isNull() && m_a_pki_ezsigntemplate_id_isValid;
}

QString Ezsigntemplate_copy_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplate_copy_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_ezsigntemplate_id.size() > 0) {
        obj.insert(QString("a_pkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_a_pki_ezsigntemplate_id));
    }
    return obj;
}

QList<qint32> Ezsigntemplate_copy_v1_Response_mPayload::getAPkiEzsigntemplateId() const {
    return m_a_pki_ezsigntemplate_id;
}
void Ezsigntemplate_copy_v1_Response_mPayload::setAPkiEzsigntemplateId(const QList<qint32> &a_pki_ezsigntemplate_id) {
    m_a_pki_ezsigntemplate_id = a_pki_ezsigntemplate_id;
    m_a_pki_ezsigntemplate_id_isSet = true;
}

bool Ezsigntemplate_copy_v1_Response_mPayload::is_a_pki_ezsigntemplate_id_Set() const{
    return m_a_pki_ezsigntemplate_id_isSet;
}

bool Ezsigntemplate_copy_v1_Response_mPayload::is_a_pki_ezsigntemplate_id_Valid() const{
    return m_a_pki_ezsigntemplate_id_isValid;
}

bool Ezsigntemplate_copy_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_ezsigntemplate_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplate_copy_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsigntemplate_id_isValid && true;
}

} // namespace Ezmaxapi
