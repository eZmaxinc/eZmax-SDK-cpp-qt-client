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

#include "OAIBillingentityinternal_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIBillingentityinternal_RequestCompound::OAIBillingentityinternal_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBillingentityinternal_RequestCompound::OAIBillingentityinternal_RequestCompound() {
    this->initializeModel();
}

OAIBillingentityinternal_RequestCompound::~OAIBillingentityinternal_RequestCompound() {}

void OAIBillingentityinternal_RequestCompound::initializeModel() {

    m_pki_billingentityinternal_id_isSet = false;
    m_pki_billingentityinternal_id_isValid = false;

    m_obj_billingentityinternal_description_isSet = false;
    m_obj_billingentityinternal_description_isValid = false;

    m_a_obj_billingentityinternalproduct_isSet = false;
    m_a_obj_billingentityinternalproduct_isValid = false;
}

void OAIBillingentityinternal_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBillingentityinternal_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_billingentityinternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_billingentityinternal_id, json[QString("pkiBillingentityinternalID")]);
    m_pki_billingentityinternal_id_isSet = !json[QString("pkiBillingentityinternalID")].isNull() && m_pki_billingentityinternal_id_isValid;

    m_obj_billingentityinternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_billingentityinternal_description, json[QString("objBillingentityinternalDescription")]);
    m_obj_billingentityinternal_description_isSet = !json[QString("objBillingentityinternalDescription")].isNull() && m_obj_billingentityinternal_description_isValid;

    m_a_obj_billingentityinternalproduct_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_billingentityinternalproduct, json[QString("a_objBillingentityinternalproduct")]);
    m_a_obj_billingentityinternalproduct_isSet = !json[QString("a_objBillingentityinternalproduct")].isNull() && m_a_obj_billingentityinternalproduct_isValid;
}

QString OAIBillingentityinternal_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBillingentityinternal_RequestCompound::asJsonObject() const {
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

qint32 OAIBillingentityinternal_RequestCompound::getPkiBillingentityinternalId() const {
    return m_pki_billingentityinternal_id;
}
void OAIBillingentityinternal_RequestCompound::setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id) {
    m_pki_billingentityinternal_id = pki_billingentityinternal_id;
    m_pki_billingentityinternal_id_isSet = true;
}

bool OAIBillingentityinternal_RequestCompound::is_pki_billingentityinternal_id_Set() const{
    return m_pki_billingentityinternal_id_isSet;
}

bool OAIBillingentityinternal_RequestCompound::is_pki_billingentityinternal_id_Valid() const{
    return m_pki_billingentityinternal_id_isValid;
}

OAIMultilingual_BillingentityinternalDescription OAIBillingentityinternal_RequestCompound::getObjBillingentityinternalDescription() const {
    return m_obj_billingentityinternal_description;
}
void OAIBillingentityinternal_RequestCompound::setObjBillingentityinternalDescription(const OAIMultilingual_BillingentityinternalDescription &obj_billingentityinternal_description) {
    m_obj_billingentityinternal_description = obj_billingentityinternal_description;
    m_obj_billingentityinternal_description_isSet = true;
}

bool OAIBillingentityinternal_RequestCompound::is_obj_billingentityinternal_description_Set() const{
    return m_obj_billingentityinternal_description_isSet;
}

bool OAIBillingentityinternal_RequestCompound::is_obj_billingentityinternal_description_Valid() const{
    return m_obj_billingentityinternal_description_isValid;
}

QList<OAIBillingentityinternalproduct_RequestCompound> OAIBillingentityinternal_RequestCompound::getAObjBillingentityinternalproduct() const {
    return m_a_obj_billingentityinternalproduct;
}
void OAIBillingentityinternal_RequestCompound::setAObjBillingentityinternalproduct(const QList<OAIBillingentityinternalproduct_RequestCompound> &a_obj_billingentityinternalproduct) {
    m_a_obj_billingentityinternalproduct = a_obj_billingentityinternalproduct;
    m_a_obj_billingentityinternalproduct_isSet = true;
}

bool OAIBillingentityinternal_RequestCompound::is_a_obj_billingentityinternalproduct_Set() const{
    return m_a_obj_billingentityinternalproduct_isSet;
}

bool OAIBillingentityinternal_RequestCompound::is_a_obj_billingentityinternalproduct_Valid() const{
    return m_a_obj_billingentityinternalproduct_isValid;
}

bool OAIBillingentityinternal_RequestCompound::isSet() const {
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

bool OAIBillingentityinternal_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_billingentityinternal_description_isValid && m_a_obj_billingentityinternalproduct_isValid && true;
}

} // namespace Ezmaxapi
