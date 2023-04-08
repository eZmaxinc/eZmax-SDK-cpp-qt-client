/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIVariableexpense_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIVariableexpense_ListElement::OAIVariableexpense_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVariableexpense_ListElement::OAIVariableexpense_ListElement() {
    this->initializeModel();
}

OAIVariableexpense_ListElement::~OAIVariableexpense_ListElement() {}

void OAIVariableexpense_ListElement::initializeModel() {

    m_pki_variableexpense_id_isSet = false;
    m_pki_variableexpense_id_isValid = false;

    m_s_variableexpense_code_isSet = false;
    m_s_variableexpense_code_isValid = false;

    m_s_variableexpense_description_x_isSet = false;
    m_s_variableexpense_description_x_isValid = false;

    m_e_variableexpense_taxable_isSet = false;
    m_e_variableexpense_taxable_isValid = false;

    m_b_variableexpense_isactive_isSet = false;
    m_b_variableexpense_isactive_isValid = false;
}

void OAIVariableexpense_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVariableexpense_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_variableexpense_id_isValid = ::OpenAPI::fromJsonValue(pki_variableexpense_id, json[QString("pkiVariableexpenseID")]);
    m_pki_variableexpense_id_isSet = !json[QString("pkiVariableexpenseID")].isNull() && m_pki_variableexpense_id_isValid;

    m_s_variableexpense_code_isValid = ::OpenAPI::fromJsonValue(s_variableexpense_code, json[QString("sVariableexpenseCode")]);
    m_s_variableexpense_code_isSet = !json[QString("sVariableexpenseCode")].isNull() && m_s_variableexpense_code_isValid;

    m_s_variableexpense_description_x_isValid = ::OpenAPI::fromJsonValue(s_variableexpense_description_x, json[QString("sVariableexpenseDescriptionX")]);
    m_s_variableexpense_description_x_isSet = !json[QString("sVariableexpenseDescriptionX")].isNull() && m_s_variableexpense_description_x_isValid;

    m_e_variableexpense_taxable_isValid = ::OpenAPI::fromJsonValue(e_variableexpense_taxable, json[QString("eVariableexpenseTaxable")]);
    m_e_variableexpense_taxable_isSet = !json[QString("eVariableexpenseTaxable")].isNull() && m_e_variableexpense_taxable_isValid;

    m_b_variableexpense_isactive_isValid = ::OpenAPI::fromJsonValue(b_variableexpense_isactive, json[QString("bVariableexpenseIsactive")]);
    m_b_variableexpense_isactive_isSet = !json[QString("bVariableexpenseIsactive")].isNull() && m_b_variableexpense_isactive_isValid;
}

QString OAIVariableexpense_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVariableexpense_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_variableexpense_id_isSet) {
        obj.insert(QString("pkiVariableexpenseID"), ::OpenAPI::toJsonValue(pki_variableexpense_id));
    }
    if (m_s_variableexpense_code_isSet) {
        obj.insert(QString("sVariableexpenseCode"), ::OpenAPI::toJsonValue(s_variableexpense_code));
    }
    if (m_s_variableexpense_description_x_isSet) {
        obj.insert(QString("sVariableexpenseDescriptionX"), ::OpenAPI::toJsonValue(s_variableexpense_description_x));
    }
    if (e_variableexpense_taxable.isSet()) {
        obj.insert(QString("eVariableexpenseTaxable"), ::OpenAPI::toJsonValue(e_variableexpense_taxable));
    }
    if (m_b_variableexpense_isactive_isSet) {
        obj.insert(QString("bVariableexpenseIsactive"), ::OpenAPI::toJsonValue(b_variableexpense_isactive));
    }
    return obj;
}

qint32 OAIVariableexpense_ListElement::getPkiVariableexpenseId() const {
    return pki_variableexpense_id;
}
void OAIVariableexpense_ListElement::setPkiVariableexpenseId(const qint32 &pki_variableexpense_id) {
    this->pki_variableexpense_id = pki_variableexpense_id;
    this->m_pki_variableexpense_id_isSet = true;
}

bool OAIVariableexpense_ListElement::is_pki_variableexpense_id_Set() const{
    return m_pki_variableexpense_id_isSet;
}

bool OAIVariableexpense_ListElement::is_pki_variableexpense_id_Valid() const{
    return m_pki_variableexpense_id_isValid;
}

QString OAIVariableexpense_ListElement::getSVariableexpenseCode() const {
    return s_variableexpense_code;
}
void OAIVariableexpense_ListElement::setSVariableexpenseCode(const QString &s_variableexpense_code) {
    this->s_variableexpense_code = s_variableexpense_code;
    this->m_s_variableexpense_code_isSet = true;
}

bool OAIVariableexpense_ListElement::is_s_variableexpense_code_Set() const{
    return m_s_variableexpense_code_isSet;
}

bool OAIVariableexpense_ListElement::is_s_variableexpense_code_Valid() const{
    return m_s_variableexpense_code_isValid;
}

QString OAIVariableexpense_ListElement::getSVariableexpenseDescriptionX() const {
    return s_variableexpense_description_x;
}
void OAIVariableexpense_ListElement::setSVariableexpenseDescriptionX(const QString &s_variableexpense_description_x) {
    this->s_variableexpense_description_x = s_variableexpense_description_x;
    this->m_s_variableexpense_description_x_isSet = true;
}

bool OAIVariableexpense_ListElement::is_s_variableexpense_description_x_Set() const{
    return m_s_variableexpense_description_x_isSet;
}

bool OAIVariableexpense_ListElement::is_s_variableexpense_description_x_Valid() const{
    return m_s_variableexpense_description_x_isValid;
}

OAIField_eVariableexpenseTaxable OAIVariableexpense_ListElement::getEVariableexpenseTaxable() const {
    return e_variableexpense_taxable;
}
void OAIVariableexpense_ListElement::setEVariableexpenseTaxable(const OAIField_eVariableexpenseTaxable &e_variableexpense_taxable) {
    this->e_variableexpense_taxable = e_variableexpense_taxable;
    this->m_e_variableexpense_taxable_isSet = true;
}

bool OAIVariableexpense_ListElement::is_e_variableexpense_taxable_Set() const{
    return m_e_variableexpense_taxable_isSet;
}

bool OAIVariableexpense_ListElement::is_e_variableexpense_taxable_Valid() const{
    return m_e_variableexpense_taxable_isValid;
}

bool OAIVariableexpense_ListElement::isBVariableexpenseIsactive() const {
    return b_variableexpense_isactive;
}
void OAIVariableexpense_ListElement::setBVariableexpenseIsactive(const bool &b_variableexpense_isactive) {
    this->b_variableexpense_isactive = b_variableexpense_isactive;
    this->m_b_variableexpense_isactive_isSet = true;
}

bool OAIVariableexpense_ListElement::is_b_variableexpense_isactive_Set() const{
    return m_b_variableexpense_isactive_isSet;
}

bool OAIVariableexpense_ListElement::is_b_variableexpense_isactive_Valid() const{
    return m_b_variableexpense_isactive_isValid;
}

bool OAIVariableexpense_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_variableexpense_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_variableexpense_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_variableexpense_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_variableexpense_taxable.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_variableexpense_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVariableexpense_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_variableexpense_id_isValid && true;
}

} // namespace OpenAPI
