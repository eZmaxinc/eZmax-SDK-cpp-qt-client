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

#include "Variableexpense_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Variableexpense_Response::Variableexpense_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Variableexpense_Response::Variableexpense_Response() {
    this->initializeModel();
}

Variableexpense_Response::~Variableexpense_Response() {}

void Variableexpense_Response::initializeModel() {

    m_pki_variableexpense_id_isSet = false;
    m_pki_variableexpense_id_isValid = false;

    m_s_variableexpense_code_isSet = false;
    m_s_variableexpense_code_isValid = false;

    m_obj_variableexpense_description_isSet = false;
    m_obj_variableexpense_description_isValid = false;

    m_e_variableexpense_taxable_isSet = false;
    m_e_variableexpense_taxable_isValid = false;

    m_b_variableexpense_isactive_isSet = false;
    m_b_variableexpense_isactive_isValid = false;
}

void Variableexpense_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Variableexpense_Response::fromJsonObject(QJsonObject json) {

    m_pki_variableexpense_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_variableexpense_id, json[QString("pkiVariableexpenseID")]);
    m_pki_variableexpense_id_isSet = !json[QString("pkiVariableexpenseID")].isNull() && m_pki_variableexpense_id_isValid;

    m_s_variableexpense_code_isValid = ::Ezmaxapi::fromJsonValue(m_s_variableexpense_code, json[QString("sVariableexpenseCode")]);
    m_s_variableexpense_code_isSet = !json[QString("sVariableexpenseCode")].isNull() && m_s_variableexpense_code_isValid;

    m_obj_variableexpense_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_variableexpense_description, json[QString("objVariableexpenseDescription")]);
    m_obj_variableexpense_description_isSet = !json[QString("objVariableexpenseDescription")].isNull() && m_obj_variableexpense_description_isValid;

    m_e_variableexpense_taxable_isValid = ::Ezmaxapi::fromJsonValue(m_e_variableexpense_taxable, json[QString("eVariableexpenseTaxable")]);
    m_e_variableexpense_taxable_isSet = !json[QString("eVariableexpenseTaxable")].isNull() && m_e_variableexpense_taxable_isValid;

    m_b_variableexpense_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_variableexpense_isactive, json[QString("bVariableexpenseIsactive")]);
    m_b_variableexpense_isactive_isSet = !json[QString("bVariableexpenseIsactive")].isNull() && m_b_variableexpense_isactive_isValid;
}

QString Variableexpense_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Variableexpense_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_variableexpense_id_isSet) {
        obj.insert(QString("pkiVariableexpenseID"), ::Ezmaxapi::toJsonValue(m_pki_variableexpense_id));
    }
    if (m_s_variableexpense_code_isSet) {
        obj.insert(QString("sVariableexpenseCode"), ::Ezmaxapi::toJsonValue(m_s_variableexpense_code));
    }
    if (m_obj_variableexpense_description.isSet()) {
        obj.insert(QString("objVariableexpenseDescription"), ::Ezmaxapi::toJsonValue(m_obj_variableexpense_description));
    }
    if (m_e_variableexpense_taxable.isSet()) {
        obj.insert(QString("eVariableexpenseTaxable"), ::Ezmaxapi::toJsonValue(m_e_variableexpense_taxable));
    }
    if (m_b_variableexpense_isactive_isSet) {
        obj.insert(QString("bVariableexpenseIsactive"), ::Ezmaxapi::toJsonValue(m_b_variableexpense_isactive));
    }
    return obj;
}

qint32 Variableexpense_Response::getPkiVariableexpenseId() const {
    return m_pki_variableexpense_id;
}
void Variableexpense_Response::setPkiVariableexpenseId(const qint32 &pki_variableexpense_id) {
    m_pki_variableexpense_id = pki_variableexpense_id;
    m_pki_variableexpense_id_isSet = true;
}

bool Variableexpense_Response::is_pki_variableexpense_id_Set() const{
    return m_pki_variableexpense_id_isSet;
}

bool Variableexpense_Response::is_pki_variableexpense_id_Valid() const{
    return m_pki_variableexpense_id_isValid;
}

QString Variableexpense_Response::getSVariableexpenseCode() const {
    return m_s_variableexpense_code;
}
void Variableexpense_Response::setSVariableexpenseCode(const QString &s_variableexpense_code) {
    m_s_variableexpense_code = s_variableexpense_code;
    m_s_variableexpense_code_isSet = true;
}

bool Variableexpense_Response::is_s_variableexpense_code_Set() const{
    return m_s_variableexpense_code_isSet;
}

bool Variableexpense_Response::is_s_variableexpense_code_Valid() const{
    return m_s_variableexpense_code_isValid;
}

Multilingual_VariableexpenseDescription Variableexpense_Response::getObjVariableexpenseDescription() const {
    return m_obj_variableexpense_description;
}
void Variableexpense_Response::setObjVariableexpenseDescription(const Multilingual_VariableexpenseDescription &obj_variableexpense_description) {
    m_obj_variableexpense_description = obj_variableexpense_description;
    m_obj_variableexpense_description_isSet = true;
}

bool Variableexpense_Response::is_obj_variableexpense_description_Set() const{
    return m_obj_variableexpense_description_isSet;
}

bool Variableexpense_Response::is_obj_variableexpense_description_Valid() const{
    return m_obj_variableexpense_description_isValid;
}

Field_eVariableexpenseTaxable Variableexpense_Response::getEVariableexpenseTaxable() const {
    return m_e_variableexpense_taxable;
}
void Variableexpense_Response::setEVariableexpenseTaxable(const Field_eVariableexpenseTaxable &e_variableexpense_taxable) {
    m_e_variableexpense_taxable = e_variableexpense_taxable;
    m_e_variableexpense_taxable_isSet = true;
}

bool Variableexpense_Response::is_e_variableexpense_taxable_Set() const{
    return m_e_variableexpense_taxable_isSet;
}

bool Variableexpense_Response::is_e_variableexpense_taxable_Valid() const{
    return m_e_variableexpense_taxable_isValid;
}

bool Variableexpense_Response::isBVariableexpenseIsactive() const {
    return m_b_variableexpense_isactive;
}
void Variableexpense_Response::setBVariableexpenseIsactive(const bool &b_variableexpense_isactive) {
    m_b_variableexpense_isactive = b_variableexpense_isactive;
    m_b_variableexpense_isactive_isSet = true;
}

bool Variableexpense_Response::is_b_variableexpense_isactive_Set() const{
    return m_b_variableexpense_isactive_isSet;
}

bool Variableexpense_Response::is_b_variableexpense_isactive_Valid() const{
    return m_b_variableexpense_isactive_isValid;
}

bool Variableexpense_Response::isSet() const {
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

        if (m_obj_variableexpense_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_variableexpense_taxable.isSet()) {
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

bool Variableexpense_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_variableexpense_id_isValid && m_obj_variableexpense_description_isValid && true;
}

} // namespace Ezmaxapi
