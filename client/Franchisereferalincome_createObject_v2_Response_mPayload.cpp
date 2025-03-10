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

#include "Franchisereferalincome_createObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Franchisereferalincome_createObject_v2_Response_mPayload::Franchisereferalincome_createObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Franchisereferalincome_createObject_v2_Response_mPayload::Franchisereferalincome_createObject_v2_Response_mPayload() {
    this->initializeModel();
}

Franchisereferalincome_createObject_v2_Response_mPayload::~Franchisereferalincome_createObject_v2_Response_mPayload() {}

void Franchisereferalincome_createObject_v2_Response_mPayload::initializeModel() {

    m_a_pki_franchisereferalincome_id_isSet = false;
    m_a_pki_franchisereferalincome_id_isValid = false;
}

void Franchisereferalincome_createObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Franchisereferalincome_createObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_franchisereferalincome_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_franchisereferalincome_id, json[QString("a_pkiFranchisereferalincomeID")]);
    m_a_pki_franchisereferalincome_id_isSet = !json[QString("a_pkiFranchisereferalincomeID")].isNull() && m_a_pki_franchisereferalincome_id_isValid;
}

QString Franchisereferalincome_createObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Franchisereferalincome_createObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_franchisereferalincome_id.size() > 0) {
        obj.insert(QString("a_pkiFranchisereferalincomeID"), ::Ezmaxapi::toJsonValue(m_a_pki_franchisereferalincome_id));
    }
    return obj;
}

QList<qint32> Franchisereferalincome_createObject_v2_Response_mPayload::getAPkiFranchisereferalincomeId() const {
    return m_a_pki_franchisereferalincome_id;
}
void Franchisereferalincome_createObject_v2_Response_mPayload::setAPkiFranchisereferalincomeId(const QList<qint32> &a_pki_franchisereferalincome_id) {
    m_a_pki_franchisereferalincome_id = a_pki_franchisereferalincome_id;
    m_a_pki_franchisereferalincome_id_isSet = true;
}

bool Franchisereferalincome_createObject_v2_Response_mPayload::is_a_pki_franchisereferalincome_id_Set() const{
    return m_a_pki_franchisereferalincome_id_isSet;
}

bool Franchisereferalincome_createObject_v2_Response_mPayload::is_a_pki_franchisereferalincome_id_Valid() const{
    return m_a_pki_franchisereferalincome_id_isValid;
}

bool Franchisereferalincome_createObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_franchisereferalincome_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Franchisereferalincome_createObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_franchisereferalincome_id_isValid && true;
}

} // namespace Ezmaxapi
