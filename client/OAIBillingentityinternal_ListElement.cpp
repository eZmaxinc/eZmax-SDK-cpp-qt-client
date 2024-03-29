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

#include "OAIBillingentityinternal_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBillingentityinternal_ListElement::OAIBillingentityinternal_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBillingentityinternal_ListElement::OAIBillingentityinternal_ListElement() {
    this->initializeModel();
}

OAIBillingentityinternal_ListElement::~OAIBillingentityinternal_ListElement() {}

void OAIBillingentityinternal_ListElement::initializeModel() {

    m_pki_billingentityinternal_id_isSet = false;
    m_pki_billingentityinternal_id_isValid = false;

    m_s_billingentityinternal_description_x_isSet = false;
    m_s_billingentityinternal_description_x_isValid = false;
}

void OAIBillingentityinternal_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBillingentityinternal_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_billingentityinternal_id_isValid = ::OpenAPI::fromJsonValue(pki_billingentityinternal_id, json[QString("pkiBillingentityinternalID")]);
    m_pki_billingentityinternal_id_isSet = !json[QString("pkiBillingentityinternalID")].isNull() && m_pki_billingentityinternal_id_isValid;

    m_s_billingentityinternal_description_x_isValid = ::OpenAPI::fromJsonValue(s_billingentityinternal_description_x, json[QString("sBillingentityinternalDescriptionX")]);
    m_s_billingentityinternal_description_x_isSet = !json[QString("sBillingentityinternalDescriptionX")].isNull() && m_s_billingentityinternal_description_x_isValid;
}

QString OAIBillingentityinternal_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBillingentityinternal_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_billingentityinternal_id_isSet) {
        obj.insert(QString("pkiBillingentityinternalID"), ::OpenAPI::toJsonValue(pki_billingentityinternal_id));
    }
    if (m_s_billingentityinternal_description_x_isSet) {
        obj.insert(QString("sBillingentityinternalDescriptionX"), ::OpenAPI::toJsonValue(s_billingentityinternal_description_x));
    }
    return obj;
}

qint32 OAIBillingentityinternal_ListElement::getPkiBillingentityinternalId() const {
    return pki_billingentityinternal_id;
}
void OAIBillingentityinternal_ListElement::setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id) {
    this->pki_billingentityinternal_id = pki_billingentityinternal_id;
    this->m_pki_billingentityinternal_id_isSet = true;
}

bool OAIBillingentityinternal_ListElement::is_pki_billingentityinternal_id_Set() const{
    return m_pki_billingentityinternal_id_isSet;
}

bool OAIBillingentityinternal_ListElement::is_pki_billingentityinternal_id_Valid() const{
    return m_pki_billingentityinternal_id_isValid;
}

QString OAIBillingentityinternal_ListElement::getSBillingentityinternalDescriptionX() const {
    return s_billingentityinternal_description_x;
}
void OAIBillingentityinternal_ListElement::setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x) {
    this->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    this->m_s_billingentityinternal_description_x_isSet = true;
}

bool OAIBillingentityinternal_ListElement::is_s_billingentityinternal_description_x_Set() const{
    return m_s_billingentityinternal_description_x_isSet;
}

bool OAIBillingentityinternal_ListElement::is_s_billingentityinternal_description_x_Valid() const{
    return m_s_billingentityinternal_description_x_isValid;
}

bool OAIBillingentityinternal_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityinternal_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBillingentityinternal_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_billingentityinternal_id_isValid && m_s_billingentityinternal_description_x_isValid && true;
}

} // namespace OpenAPI
