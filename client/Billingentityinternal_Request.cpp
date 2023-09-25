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

#include "Billingentityinternal_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Billingentityinternal_Request::Billingentityinternal_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Billingentityinternal_Request::Billingentityinternal_Request() {
    this->initializeModel();
}

Billingentityinternal_Request::~Billingentityinternal_Request() {}

void Billingentityinternal_Request::initializeModel() {

    m_pki_billingentityinternal_id_isSet = false;
    m_pki_billingentityinternal_id_isValid = false;

    m_obj_billingentityinternal_description_isSet = false;
    m_obj_billingentityinternal_description_isValid = false;
}

void Billingentityinternal_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Billingentityinternal_Request::fromJsonObject(QJsonObject json) {

    m_pki_billingentityinternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_billingentityinternal_id, json[QString("pkiBillingentityinternalID")]);
    m_pki_billingentityinternal_id_isSet = !json[QString("pkiBillingentityinternalID")].isNull() && m_pki_billingentityinternal_id_isValid;

    m_obj_billingentityinternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_billingentityinternal_description, json[QString("objBillingentityinternalDescription")]);
    m_obj_billingentityinternal_description_isSet = !json[QString("objBillingentityinternalDescription")].isNull() && m_obj_billingentityinternal_description_isValid;
}

QString Billingentityinternal_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Billingentityinternal_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_billingentityinternal_id_isSet) {
        obj.insert(QString("pkiBillingentityinternalID"), ::Ezmaxapi::toJsonValue(m_pki_billingentityinternal_id));
    }
    if (m_obj_billingentityinternal_description.isSet()) {
        obj.insert(QString("objBillingentityinternalDescription"), ::Ezmaxapi::toJsonValue(m_obj_billingentityinternal_description));
    }
    return obj;
}

qint32 Billingentityinternal_Request::getPkiBillingentityinternalId() const {
    return m_pki_billingentityinternal_id;
}
void Billingentityinternal_Request::setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id) {
    m_pki_billingentityinternal_id = pki_billingentityinternal_id;
    m_pki_billingentityinternal_id_isSet = true;
}

bool Billingentityinternal_Request::is_pki_billingentityinternal_id_Set() const{
    return m_pki_billingentityinternal_id_isSet;
}

bool Billingentityinternal_Request::is_pki_billingentityinternal_id_Valid() const{
    return m_pki_billingentityinternal_id_isValid;
}

Multilingual_BillingentityinternalDescription Billingentityinternal_Request::getObjBillingentityinternalDescription() const {
    return m_obj_billingentityinternal_description;
}
void Billingentityinternal_Request::setObjBillingentityinternalDescription(const Multilingual_BillingentityinternalDescription &obj_billingentityinternal_description) {
    m_obj_billingentityinternal_description = obj_billingentityinternal_description;
    m_obj_billingentityinternal_description_isSet = true;
}

bool Billingentityinternal_Request::is_obj_billingentityinternal_description_Set() const{
    return m_obj_billingentityinternal_description_isSet;
}

bool Billingentityinternal_Request::is_obj_billingentityinternal_description_Valid() const{
    return m_obj_billingentityinternal_description_isValid;
}

bool Billingentityinternal_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_billingentityinternal_description.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Billingentityinternal_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_billingentityinternal_description_isValid && true;
}

} // namespace Ezmaxapi
