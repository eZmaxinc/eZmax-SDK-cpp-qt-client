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

#include "Ezsigntemplateglobal_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateglobal_ResponseCompound::Ezsigntemplateglobal_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateglobal_ResponseCompound::Ezsigntemplateglobal_ResponseCompound() {
    this->initializeModel();
}

Ezsigntemplateglobal_ResponseCompound::~Ezsigntemplateglobal_ResponseCompound() {}

void Ezsigntemplateglobal_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplateglobal_id_isSet = false;
    m_pki_ezsigntemplateglobal_id_isValid = false;

    m_fki_ezsigntemplateglobaldocument_id_isSet = false;
    m_fki_ezsigntemplateglobaldocument_id_isValid = false;

    m_fki_module_id_isSet = false;
    m_fki_module_id_isValid = false;

    m_s_module_name_x_isSet = false;
    m_s_module_name_x_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_language_name_x_isSet = false;
    m_s_language_name_x_isValid = false;

    m_e_ezsigntemplateglobal_module_isSet = false;
    m_e_ezsigntemplateglobal_module_isValid = false;

    m_e_ezsigntemplateglobal_supplier_isSet = false;
    m_e_ezsigntemplateglobal_supplier_isValid = false;

    m_s_ezsigntemplateglobal_code_isSet = false;
    m_s_ezsigntemplateglobal_code_isValid = false;

    m_s_ezsigntemplateglobal_description_isSet = false;
    m_s_ezsigntemplateglobal_description_isValid = false;

    m_obj_ezsigntemplateglobaldocument_isSet = false;
    m_obj_ezsigntemplateglobaldocument_isValid = false;

    m_a_obj_ezsigntemplateglobalsigner_isSet = false;
    m_a_obj_ezsigntemplateglobalsigner_isValid = false;
}

void Ezsigntemplateglobal_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateglobal_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplateglobal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplateglobal_id, json[QString("pkiEzsigntemplateglobalID")]);
    m_pki_ezsigntemplateglobal_id_isSet = !json[QString("pkiEzsigntemplateglobalID")].isNull() && m_pki_ezsigntemplateglobal_id_isValid;

    m_fki_ezsigntemplateglobaldocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplateglobaldocument_id, json[QString("fkiEzsigntemplateglobaldocumentID")]);
    m_fki_ezsigntemplateglobaldocument_id_isSet = !json[QString("fkiEzsigntemplateglobaldocumentID")].isNull() && m_fki_ezsigntemplateglobaldocument_id_isValid;

    m_fki_module_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_module_id, json[QString("fkiModuleID")]);
    m_fki_module_id_isSet = !json[QString("fkiModuleID")].isNull() && m_fki_module_id_isValid;

    m_s_module_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_module_name_x, json[QString("sModuleNameX")]);
    m_s_module_name_x_isSet = !json[QString("sModuleNameX")].isNull() && m_s_module_name_x_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_language_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_language_name_x, json[QString("sLanguageNameX")]);
    m_s_language_name_x_isSet = !json[QString("sLanguageNameX")].isNull() && m_s_language_name_x_isValid;

    m_e_ezsigntemplateglobal_module_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateglobal_module, json[QString("eEzsigntemplateglobalModule")]);
    m_e_ezsigntemplateglobal_module_isSet = !json[QString("eEzsigntemplateglobalModule")].isNull() && m_e_ezsigntemplateglobal_module_isValid;

    m_e_ezsigntemplateglobal_supplier_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateglobal_supplier, json[QString("eEzsigntemplateglobalSupplier")]);
    m_e_ezsigntemplateglobal_supplier_isSet = !json[QString("eEzsigntemplateglobalSupplier")].isNull() && m_e_ezsigntemplateglobal_supplier_isValid;

    m_s_ezsigntemplateglobal_code_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateglobal_code, json[QString("sEzsigntemplateglobalCode")]);
    m_s_ezsigntemplateglobal_code_isSet = !json[QString("sEzsigntemplateglobalCode")].isNull() && m_s_ezsigntemplateglobal_code_isValid;

    m_s_ezsigntemplateglobal_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateglobal_description, json[QString("sEzsigntemplateglobalDescription")]);
    m_s_ezsigntemplateglobal_description_isSet = !json[QString("sEzsigntemplateglobalDescription")].isNull() && m_s_ezsigntemplateglobal_description_isValid;

    m_obj_ezsigntemplateglobaldocument_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigntemplateglobaldocument, json[QString("objEzsigntemplateglobaldocument")]);
    m_obj_ezsigntemplateglobaldocument_isSet = !json[QString("objEzsigntemplateglobaldocument")].isNull() && m_obj_ezsigntemplateglobaldocument_isValid;

    m_a_obj_ezsigntemplateglobalsigner_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplateglobalsigner, json[QString("a_objEzsigntemplateglobalsigner")]);
    m_a_obj_ezsigntemplateglobalsigner_isSet = !json[QString("a_objEzsigntemplateglobalsigner")].isNull() && m_a_obj_ezsigntemplateglobalsigner_isValid;
}

QString Ezsigntemplateglobal_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateglobal_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplateglobal_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateglobalID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplateglobal_id));
    }
    if (m_fki_ezsigntemplateglobaldocument_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateglobaldocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplateglobaldocument_id));
    }
    if (m_fki_module_id_isSet) {
        obj.insert(QString("fkiModuleID"), ::Ezmaxapi::toJsonValue(m_fki_module_id));
    }
    if (m_s_module_name_x_isSet) {
        obj.insert(QString("sModuleNameX"), ::Ezmaxapi::toJsonValue(m_s_module_name_x));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_s_language_name_x_isSet) {
        obj.insert(QString("sLanguageNameX"), ::Ezmaxapi::toJsonValue(m_s_language_name_x));
    }
    if (m_e_ezsigntemplateglobal_module.isSet()) {
        obj.insert(QString("eEzsigntemplateglobalModule"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateglobal_module));
    }
    if (m_e_ezsigntemplateglobal_supplier.isSet()) {
        obj.insert(QString("eEzsigntemplateglobalSupplier"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateglobal_supplier));
    }
    if (m_s_ezsigntemplateglobal_code_isSet) {
        obj.insert(QString("sEzsigntemplateglobalCode"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateglobal_code));
    }
    if (m_s_ezsigntemplateglobal_description_isSet) {
        obj.insert(QString("sEzsigntemplateglobalDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateglobal_description));
    }
    if (m_obj_ezsigntemplateglobaldocument.isSet()) {
        obj.insert(QString("objEzsigntemplateglobaldocument"), ::Ezmaxapi::toJsonValue(m_obj_ezsigntemplateglobaldocument));
    }
    if (m_a_obj_ezsigntemplateglobalsigner.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateglobalsigner"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplateglobalsigner));
    }
    return obj;
}

qint32 Ezsigntemplateglobal_ResponseCompound::getPkiEzsigntemplateglobalId() const {
    return m_pki_ezsigntemplateglobal_id;
}
void Ezsigntemplateglobal_ResponseCompound::setPkiEzsigntemplateglobalId(const qint32 &pki_ezsigntemplateglobal_id) {
    m_pki_ezsigntemplateglobal_id = pki_ezsigntemplateglobal_id;
    m_pki_ezsigntemplateglobal_id_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_pki_ezsigntemplateglobal_id_Set() const{
    return m_pki_ezsigntemplateglobal_id_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_pki_ezsigntemplateglobal_id_Valid() const{
    return m_pki_ezsigntemplateglobal_id_isValid;
}

qint32 Ezsigntemplateglobal_ResponseCompound::getFkiEzsigntemplateglobaldocumentId() const {
    return m_fki_ezsigntemplateglobaldocument_id;
}
void Ezsigntemplateglobal_ResponseCompound::setFkiEzsigntemplateglobaldocumentId(const qint32 &fki_ezsigntemplateglobaldocument_id) {
    m_fki_ezsigntemplateglobaldocument_id = fki_ezsigntemplateglobaldocument_id;
    m_fki_ezsigntemplateglobaldocument_id_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_fki_ezsigntemplateglobaldocument_id_Set() const{
    return m_fki_ezsigntemplateglobaldocument_id_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_fki_ezsigntemplateglobaldocument_id_Valid() const{
    return m_fki_ezsigntemplateglobaldocument_id_isValid;
}

qint32 Ezsigntemplateglobal_ResponseCompound::getFkiModuleId() const {
    return m_fki_module_id;
}
void Ezsigntemplateglobal_ResponseCompound::setFkiModuleId(const qint32 &fki_module_id) {
    m_fki_module_id = fki_module_id;
    m_fki_module_id_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_fki_module_id_Set() const{
    return m_fki_module_id_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_fki_module_id_Valid() const{
    return m_fki_module_id_isValid;
}

QString Ezsigntemplateglobal_ResponseCompound::getSModuleNameX() const {
    return m_s_module_name_x;
}
void Ezsigntemplateglobal_ResponseCompound::setSModuleNameX(const QString &s_module_name_x) {
    m_s_module_name_x = s_module_name_x;
    m_s_module_name_x_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_s_module_name_x_Set() const{
    return m_s_module_name_x_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_s_module_name_x_Valid() const{
    return m_s_module_name_x_isValid;
}

qint32 Ezsigntemplateglobal_ResponseCompound::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Ezsigntemplateglobal_ResponseCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString Ezsigntemplateglobal_ResponseCompound::getSLanguageNameX() const {
    return m_s_language_name_x;
}
void Ezsigntemplateglobal_ResponseCompound::setSLanguageNameX(const QString &s_language_name_x) {
    m_s_language_name_x = s_language_name_x;
    m_s_language_name_x_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_s_language_name_x_Set() const{
    return m_s_language_name_x_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_s_language_name_x_Valid() const{
    return m_s_language_name_x_isValid;
}

Field_eEzsigntemplateglobalModule Ezsigntemplateglobal_ResponseCompound::getEEzsigntemplateglobalModule() const {
    return m_e_ezsigntemplateglobal_module;
}
void Ezsigntemplateglobal_ResponseCompound::setEEzsigntemplateglobalModule(const Field_eEzsigntemplateglobalModule &e_ezsigntemplateglobal_module) {
    m_e_ezsigntemplateglobal_module = e_ezsigntemplateglobal_module;
    m_e_ezsigntemplateglobal_module_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_e_ezsigntemplateglobal_module_Set() const{
    return m_e_ezsigntemplateglobal_module_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_e_ezsigntemplateglobal_module_Valid() const{
    return m_e_ezsigntemplateglobal_module_isValid;
}

Field_eEzsigntemplateglobalSupplier Ezsigntemplateglobal_ResponseCompound::getEEzsigntemplateglobalSupplier() const {
    return m_e_ezsigntemplateglobal_supplier;
}
void Ezsigntemplateglobal_ResponseCompound::setEEzsigntemplateglobalSupplier(const Field_eEzsigntemplateglobalSupplier &e_ezsigntemplateglobal_supplier) {
    m_e_ezsigntemplateglobal_supplier = e_ezsigntemplateglobal_supplier;
    m_e_ezsigntemplateglobal_supplier_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_e_ezsigntemplateglobal_supplier_Set() const{
    return m_e_ezsigntemplateglobal_supplier_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_e_ezsigntemplateglobal_supplier_Valid() const{
    return m_e_ezsigntemplateglobal_supplier_isValid;
}

QString Ezsigntemplateglobal_ResponseCompound::getSEzsigntemplateglobalCode() const {
    return m_s_ezsigntemplateglobal_code;
}
void Ezsigntemplateglobal_ResponseCompound::setSEzsigntemplateglobalCode(const QString &s_ezsigntemplateglobal_code) {
    m_s_ezsigntemplateglobal_code = s_ezsigntemplateglobal_code;
    m_s_ezsigntemplateglobal_code_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_s_ezsigntemplateglobal_code_Set() const{
    return m_s_ezsigntemplateglobal_code_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_s_ezsigntemplateglobal_code_Valid() const{
    return m_s_ezsigntemplateglobal_code_isValid;
}

QString Ezsigntemplateglobal_ResponseCompound::getSEzsigntemplateglobalDescription() const {
    return m_s_ezsigntemplateglobal_description;
}
void Ezsigntemplateglobal_ResponseCompound::setSEzsigntemplateglobalDescription(const QString &s_ezsigntemplateglobal_description) {
    m_s_ezsigntemplateglobal_description = s_ezsigntemplateglobal_description;
    m_s_ezsigntemplateglobal_description_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_s_ezsigntemplateglobal_description_Set() const{
    return m_s_ezsigntemplateglobal_description_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_s_ezsigntemplateglobal_description_Valid() const{
    return m_s_ezsigntemplateglobal_description_isValid;
}

Ezsigntemplateglobaldocument_Response Ezsigntemplateglobal_ResponseCompound::getObjEzsigntemplateglobaldocument() const {
    return m_obj_ezsigntemplateglobaldocument;
}
void Ezsigntemplateglobal_ResponseCompound::setObjEzsigntemplateglobaldocument(const Ezsigntemplateglobaldocument_Response &obj_ezsigntemplateglobaldocument) {
    m_obj_ezsigntemplateglobaldocument = obj_ezsigntemplateglobaldocument;
    m_obj_ezsigntemplateglobaldocument_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_obj_ezsigntemplateglobaldocument_Set() const{
    return m_obj_ezsigntemplateglobaldocument_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_obj_ezsigntemplateglobaldocument_Valid() const{
    return m_obj_ezsigntemplateglobaldocument_isValid;
}

QList<Ezsigntemplateglobalsigner_ResponseCompound> Ezsigntemplateglobal_ResponseCompound::getAObjEzsigntemplateglobalsigner() const {
    return m_a_obj_ezsigntemplateglobalsigner;
}
void Ezsigntemplateglobal_ResponseCompound::setAObjEzsigntemplateglobalsigner(const QList<Ezsigntemplateglobalsigner_ResponseCompound> &a_obj_ezsigntemplateglobalsigner) {
    m_a_obj_ezsigntemplateglobalsigner = a_obj_ezsigntemplateglobalsigner;
    m_a_obj_ezsigntemplateglobalsigner_isSet = true;
}

bool Ezsigntemplateglobal_ResponseCompound::is_a_obj_ezsigntemplateglobalsigner_Set() const{
    return m_a_obj_ezsigntemplateglobalsigner_isSet;
}

bool Ezsigntemplateglobal_ResponseCompound::is_a_obj_ezsigntemplateglobalsigner_Valid() const{
    return m_a_obj_ezsigntemplateglobalsigner_isValid;
}

bool Ezsigntemplateglobal_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplateglobal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplateglobaldocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_module_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_module_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_language_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateglobal_module.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateglobal_supplier.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateglobal_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateglobal_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsigntemplateglobaldocument.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsigntemplateglobalsigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateglobal_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplateglobal_id_isValid && m_fki_ezsigntemplateglobaldocument_id_isValid && m_fki_module_id_isValid && m_fki_language_id_isValid && m_s_language_name_x_isValid && m_e_ezsigntemplateglobal_module_isValid && m_e_ezsigntemplateglobal_supplier_isValid && m_s_ezsigntemplateglobal_code_isValid && m_s_ezsigntemplateglobal_description_isValid && m_a_obj_ezsigntemplateglobalsigner_isValid && true;
}

} // namespace Ezmaxapi
