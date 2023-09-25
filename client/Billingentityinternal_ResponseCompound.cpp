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

#include "Billingentityinternal_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Billingentityinternal_ResponseCompound::Billingentityinternal_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Billingentityinternal_ResponseCompound::Billingentityinternal_ResponseCompound() {
    this->initializeModel();
}

Billingentityinternal_ResponseCompound::~Billingentityinternal_ResponseCompound() {}

void Billingentityinternal_ResponseCompound::initializeModel() {

    m_pki_billingentityinternal_id_isSet = false;
    m_pki_billingentityinternal_id_isValid = false;

    m_obj_billingentityinternal_description_isSet = false;
    m_obj_billingentityinternal_description_isValid = false;

    m_a_obj_billingentityinternalproduct_isSet = false;
    m_a_obj_billingentityinternalproduct_isValid = false;
}

void Billingentityinternal_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Billingentityinternal_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_billingentityinternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_billingentityinternal_id, json[QString("pkiBillingentityinternalID")]);
    m_pki_billingentityinternal_id_isSet = !json[QString("pkiBillingentityinternalID")].isNull() && m_pki_billingentityinternal_id_isValid;

    m_obj_billingentityinternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_billingentityinternal_description, json[QString("objBillingentityinternalDescription")]);
    m_obj_billingentityinternal_description_isSet = !json[QString("objBillingentityinternalDescription")].isNull() && m_obj_billingentityinternal_description_isValid;

    m_a_obj_billingentityinternalproduct_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_billingentityinternalproduct, json[QString("a_objBillingentityinternalproduct")]);
    m_a_obj_billingentityinternalproduct_isSet = !json[QString("a_objBillingentityinternalproduct")].isNull() && m_a_obj_billingentityinternalproduct_isValid;
}

QString Billingentityinternal_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Billingentityinternal_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_billingentityinternal_id_isSet) {
        obj.insert(QString("pkiBillingentityinternalID"), ::Ezmaxapi::toJsonValue(m_pki_billingentityinternal_id));
    }
    if (m_obj_billingentityinternal_description.isSet()) {
        obj.insert(QString("objBillingentityinternalDescription"), ::Ezmaxapi::toJsonValue(m_obj_billingentityinternal_description));
    }
    if (m_a_obj_billingentityinternalproduct.size() > 0) {
        obj.insert(QString("a_objBillingentityinternalproduct"), ::Ezmaxapi::toJsonValue(m_a_obj_billingentityinternalproduct));
    }
    return obj;
}

qint32 Billingentityinternal_ResponseCompound::getPkiBillingentityinternalId() const {
    return m_pki_billingentityinternal_id;
}
void Billingentityinternal_ResponseCompound::setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id) {
    m_pki_billingentityinternal_id = pki_billingentityinternal_id;
    m_pki_billingentityinternal_id_isSet = true;
}

bool Billingentityinternal_ResponseCompound::is_pki_billingentityinternal_id_Set() const{
    return m_pki_billingentityinternal_id_isSet;
}

bool Billingentityinternal_ResponseCompound::is_pki_billingentityinternal_id_Valid() const{
    return m_pki_billingentityinternal_id_isValid;
}

Multilingual_BillingentityinternalDescription Billingentityinternal_ResponseCompound::getObjBillingentityinternalDescription() const {
    return m_obj_billingentityinternal_description;
}
void Billingentityinternal_ResponseCompound::setObjBillingentityinternalDescription(const Multilingual_BillingentityinternalDescription &obj_billingentityinternal_description) {
    m_obj_billingentityinternal_description = obj_billingentityinternal_description;
    m_obj_billingentityinternal_description_isSet = true;
}

bool Billingentityinternal_ResponseCompound::is_obj_billingentityinternal_description_Set() const{
    return m_obj_billingentityinternal_description_isSet;
}

bool Billingentityinternal_ResponseCompound::is_obj_billingentityinternal_description_Valid() const{
    return m_obj_billingentityinternal_description_isValid;
}

QList<Billingentityinternalproduct_ResponseCompound> Billingentityinternal_ResponseCompound::getAObjBillingentityinternalproduct() const {
    return m_a_obj_billingentityinternalproduct;
}
void Billingentityinternal_ResponseCompound::setAObjBillingentityinternalproduct(const QList<Billingentityinternalproduct_ResponseCompound> &a_obj_billingentityinternalproduct) {
    m_a_obj_billingentityinternalproduct = a_obj_billingentityinternalproduct;
    m_a_obj_billingentityinternalproduct_isSet = true;
}

bool Billingentityinternal_ResponseCompound::is_a_obj_billingentityinternalproduct_Set() const{
    return m_a_obj_billingentityinternalproduct_isSet;
}

bool Billingentityinternal_ResponseCompound::is_a_obj_billingentityinternalproduct_Valid() const{
    return m_a_obj_billingentityinternalproduct_isValid;
}

bool Billingentityinternal_ResponseCompound::isSet() const {
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

        if (m_a_obj_billingentityinternalproduct.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Billingentityinternal_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_billingentityinternal_id_isValid && m_obj_billingentityinternal_description_isValid && m_a_obj_billingentityinternalproduct_isValid && true;
}

} // namespace Ezmaxapi
