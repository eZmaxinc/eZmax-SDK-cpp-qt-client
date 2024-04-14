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

#include "Versionhistory_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Versionhistory_ResponseCompound::Versionhistory_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Versionhistory_ResponseCompound::Versionhistory_ResponseCompound() {
    this->initializeModel();
}

Versionhistory_ResponseCompound::~Versionhistory_ResponseCompound() {}

void Versionhistory_ResponseCompound::initializeModel() {

    m_pki_versionhistory_id_isSet = false;
    m_pki_versionhistory_id_isValid = false;

    m_fki_module_id_isSet = false;
    m_fki_module_id_isValid = false;

    m_fki_modulesection_id_isSet = false;
    m_fki_modulesection_id_isValid = false;

    m_s_module_name_x_isSet = false;
    m_s_module_name_x_isValid = false;

    m_s_modulesection_name_x_isSet = false;
    m_s_modulesection_name_x_isValid = false;

    m_e_versionhistory_usertype_isSet = false;
    m_e_versionhistory_usertype_isValid = false;

    m_obj_versionhistory_detail_isSet = false;
    m_obj_versionhistory_detail_isValid = false;

    m_dt_versionhistory_date_isSet = false;
    m_dt_versionhistory_date_isValid = false;

    m_dt_versionhistory_dateend_isSet = false;
    m_dt_versionhistory_dateend_isValid = false;

    m_e_versionhistory_type_isSet = false;
    m_e_versionhistory_type_isValid = false;

    m_b_versionhistory_draft_isSet = false;
    m_b_versionhistory_draft_isValid = false;
}

void Versionhistory_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Versionhistory_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_versionhistory_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_versionhistory_id, json[QString("pkiVersionhistoryID")]);
    m_pki_versionhistory_id_isSet = !json[QString("pkiVersionhistoryID")].isNull() && m_pki_versionhistory_id_isValid;

    m_fki_module_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_module_id, json[QString("fkiModuleID")]);
    m_fki_module_id_isSet = !json[QString("fkiModuleID")].isNull() && m_fki_module_id_isValid;

    m_fki_modulesection_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_modulesection_id, json[QString("fkiModulesectionID")]);
    m_fki_modulesection_id_isSet = !json[QString("fkiModulesectionID")].isNull() && m_fki_modulesection_id_isValid;

    m_s_module_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_module_name_x, json[QString("sModuleNameX")]);
    m_s_module_name_x_isSet = !json[QString("sModuleNameX")].isNull() && m_s_module_name_x_isValid;

    m_s_modulesection_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_modulesection_name_x, json[QString("sModulesectionNameX")]);
    m_s_modulesection_name_x_isSet = !json[QString("sModulesectionNameX")].isNull() && m_s_modulesection_name_x_isValid;

    m_e_versionhistory_usertype_isValid = ::Ezmaxapi::fromJsonValue(m_e_versionhistory_usertype, json[QString("eVersionhistoryUsertype")]);
    m_e_versionhistory_usertype_isSet = !json[QString("eVersionhistoryUsertype")].isNull() && m_e_versionhistory_usertype_isValid;

    m_obj_versionhistory_detail_isValid = ::Ezmaxapi::fromJsonValue(m_obj_versionhistory_detail, json[QString("objVersionhistoryDetail")]);
    m_obj_versionhistory_detail_isSet = !json[QString("objVersionhistoryDetail")].isNull() && m_obj_versionhistory_detail_isValid;

    m_dt_versionhistory_date_isValid = ::Ezmaxapi::fromJsonValue(m_dt_versionhistory_date, json[QString("dtVersionhistoryDate")]);
    m_dt_versionhistory_date_isSet = !json[QString("dtVersionhistoryDate")].isNull() && m_dt_versionhistory_date_isValid;

    m_dt_versionhistory_dateend_isValid = ::Ezmaxapi::fromJsonValue(m_dt_versionhistory_dateend, json[QString("dtVersionhistoryDateend")]);
    m_dt_versionhistory_dateend_isSet = !json[QString("dtVersionhistoryDateend")].isNull() && m_dt_versionhistory_dateend_isValid;

    m_e_versionhistory_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_versionhistory_type, json[QString("eVersionhistoryType")]);
    m_e_versionhistory_type_isSet = !json[QString("eVersionhistoryType")].isNull() && m_e_versionhistory_type_isValid;

    m_b_versionhistory_draft_isValid = ::Ezmaxapi::fromJsonValue(m_b_versionhistory_draft, json[QString("bVersionhistoryDraft")]);
    m_b_versionhistory_draft_isSet = !json[QString("bVersionhistoryDraft")].isNull() && m_b_versionhistory_draft_isValid;
}

QString Versionhistory_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Versionhistory_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_versionhistory_id_isSet) {
        obj.insert(QString("pkiVersionhistoryID"), ::Ezmaxapi::toJsonValue(m_pki_versionhistory_id));
    }
    if (m_fki_module_id_isSet) {
        obj.insert(QString("fkiModuleID"), ::Ezmaxapi::toJsonValue(m_fki_module_id));
    }
    if (m_fki_modulesection_id_isSet) {
        obj.insert(QString("fkiModulesectionID"), ::Ezmaxapi::toJsonValue(m_fki_modulesection_id));
    }
    if (m_s_module_name_x_isSet) {
        obj.insert(QString("sModuleNameX"), ::Ezmaxapi::toJsonValue(m_s_module_name_x));
    }
    if (m_s_modulesection_name_x_isSet) {
        obj.insert(QString("sModulesectionNameX"), ::Ezmaxapi::toJsonValue(m_s_modulesection_name_x));
    }
    if (m_e_versionhistory_usertype.isSet()) {
        obj.insert(QString("eVersionhistoryUsertype"), ::Ezmaxapi::toJsonValue(m_e_versionhistory_usertype));
    }
    if (m_obj_versionhistory_detail.isSet()) {
        obj.insert(QString("objVersionhistoryDetail"), ::Ezmaxapi::toJsonValue(m_obj_versionhistory_detail));
    }
    if (m_dt_versionhistory_date_isSet) {
        obj.insert(QString("dtVersionhistoryDate"), ::Ezmaxapi::toJsonValue(m_dt_versionhistory_date));
    }
    if (m_dt_versionhistory_dateend_isSet) {
        obj.insert(QString("dtVersionhistoryDateend"), ::Ezmaxapi::toJsonValue(m_dt_versionhistory_dateend));
    }
    if (m_e_versionhistory_type.isSet()) {
        obj.insert(QString("eVersionhistoryType"), ::Ezmaxapi::toJsonValue(m_e_versionhistory_type));
    }
    if (m_b_versionhistory_draft_isSet) {
        obj.insert(QString("bVersionhistoryDraft"), ::Ezmaxapi::toJsonValue(m_b_versionhistory_draft));
    }
    return obj;
}

qint32 Versionhistory_ResponseCompound::getPkiVersionhistoryId() const {
    return m_pki_versionhistory_id;
}
void Versionhistory_ResponseCompound::setPkiVersionhistoryId(const qint32 &pki_versionhistory_id) {
    m_pki_versionhistory_id = pki_versionhistory_id;
    m_pki_versionhistory_id_isSet = true;
}

bool Versionhistory_ResponseCompound::is_pki_versionhistory_id_Set() const{
    return m_pki_versionhistory_id_isSet;
}

bool Versionhistory_ResponseCompound::is_pki_versionhistory_id_Valid() const{
    return m_pki_versionhistory_id_isValid;
}

qint32 Versionhistory_ResponseCompound::getFkiModuleId() const {
    return m_fki_module_id;
}
void Versionhistory_ResponseCompound::setFkiModuleId(const qint32 &fki_module_id) {
    m_fki_module_id = fki_module_id;
    m_fki_module_id_isSet = true;
}

bool Versionhistory_ResponseCompound::is_fki_module_id_Set() const{
    return m_fki_module_id_isSet;
}

bool Versionhistory_ResponseCompound::is_fki_module_id_Valid() const{
    return m_fki_module_id_isValid;
}

qint32 Versionhistory_ResponseCompound::getFkiModulesectionId() const {
    return m_fki_modulesection_id;
}
void Versionhistory_ResponseCompound::setFkiModulesectionId(const qint32 &fki_modulesection_id) {
    m_fki_modulesection_id = fki_modulesection_id;
    m_fki_modulesection_id_isSet = true;
}

bool Versionhistory_ResponseCompound::is_fki_modulesection_id_Set() const{
    return m_fki_modulesection_id_isSet;
}

bool Versionhistory_ResponseCompound::is_fki_modulesection_id_Valid() const{
    return m_fki_modulesection_id_isValid;
}

QString Versionhistory_ResponseCompound::getSModuleNameX() const {
    return m_s_module_name_x;
}
void Versionhistory_ResponseCompound::setSModuleNameX(const QString &s_module_name_x) {
    m_s_module_name_x = s_module_name_x;
    m_s_module_name_x_isSet = true;
}

bool Versionhistory_ResponseCompound::is_s_module_name_x_Set() const{
    return m_s_module_name_x_isSet;
}

bool Versionhistory_ResponseCompound::is_s_module_name_x_Valid() const{
    return m_s_module_name_x_isValid;
}

QString Versionhistory_ResponseCompound::getSModulesectionNameX() const {
    return m_s_modulesection_name_x;
}
void Versionhistory_ResponseCompound::setSModulesectionNameX(const QString &s_modulesection_name_x) {
    m_s_modulesection_name_x = s_modulesection_name_x;
    m_s_modulesection_name_x_isSet = true;
}

bool Versionhistory_ResponseCompound::is_s_modulesection_name_x_Set() const{
    return m_s_modulesection_name_x_isSet;
}

bool Versionhistory_ResponseCompound::is_s_modulesection_name_x_Valid() const{
    return m_s_modulesection_name_x_isValid;
}

Field_eVersionhistoryUsertype Versionhistory_ResponseCompound::getEVersionhistoryUsertype() const {
    return m_e_versionhistory_usertype;
}
void Versionhistory_ResponseCompound::setEVersionhistoryUsertype(const Field_eVersionhistoryUsertype &e_versionhistory_usertype) {
    m_e_versionhistory_usertype = e_versionhistory_usertype;
    m_e_versionhistory_usertype_isSet = true;
}

bool Versionhistory_ResponseCompound::is_e_versionhistory_usertype_Set() const{
    return m_e_versionhistory_usertype_isSet;
}

bool Versionhistory_ResponseCompound::is_e_versionhistory_usertype_Valid() const{
    return m_e_versionhistory_usertype_isValid;
}

Multilingual_VersionhistoryDetail Versionhistory_ResponseCompound::getObjVersionhistoryDetail() const {
    return m_obj_versionhistory_detail;
}
void Versionhistory_ResponseCompound::setObjVersionhistoryDetail(const Multilingual_VersionhistoryDetail &obj_versionhistory_detail) {
    m_obj_versionhistory_detail = obj_versionhistory_detail;
    m_obj_versionhistory_detail_isSet = true;
}

bool Versionhistory_ResponseCompound::is_obj_versionhistory_detail_Set() const{
    return m_obj_versionhistory_detail_isSet;
}

bool Versionhistory_ResponseCompound::is_obj_versionhistory_detail_Valid() const{
    return m_obj_versionhistory_detail_isValid;
}

QString Versionhistory_ResponseCompound::getDtVersionhistoryDate() const {
    return m_dt_versionhistory_date;
}
void Versionhistory_ResponseCompound::setDtVersionhistoryDate(const QString &dt_versionhistory_date) {
    m_dt_versionhistory_date = dt_versionhistory_date;
    m_dt_versionhistory_date_isSet = true;
}

bool Versionhistory_ResponseCompound::is_dt_versionhistory_date_Set() const{
    return m_dt_versionhistory_date_isSet;
}

bool Versionhistory_ResponseCompound::is_dt_versionhistory_date_Valid() const{
    return m_dt_versionhistory_date_isValid;
}

QString Versionhistory_ResponseCompound::getDtVersionhistoryDateend() const {
    return m_dt_versionhistory_dateend;
}
void Versionhistory_ResponseCompound::setDtVersionhistoryDateend(const QString &dt_versionhistory_dateend) {
    m_dt_versionhistory_dateend = dt_versionhistory_dateend;
    m_dt_versionhistory_dateend_isSet = true;
}

bool Versionhistory_ResponseCompound::is_dt_versionhistory_dateend_Set() const{
    return m_dt_versionhistory_dateend_isSet;
}

bool Versionhistory_ResponseCompound::is_dt_versionhistory_dateend_Valid() const{
    return m_dt_versionhistory_dateend_isValid;
}

Field_eVersionhistoryType Versionhistory_ResponseCompound::getEVersionhistoryType() const {
    return m_e_versionhistory_type;
}
void Versionhistory_ResponseCompound::setEVersionhistoryType(const Field_eVersionhistoryType &e_versionhistory_type) {
    m_e_versionhistory_type = e_versionhistory_type;
    m_e_versionhistory_type_isSet = true;
}

bool Versionhistory_ResponseCompound::is_e_versionhistory_type_Set() const{
    return m_e_versionhistory_type_isSet;
}

bool Versionhistory_ResponseCompound::is_e_versionhistory_type_Valid() const{
    return m_e_versionhistory_type_isValid;
}

bool Versionhistory_ResponseCompound::isBVersionhistoryDraft() const {
    return m_b_versionhistory_draft;
}
void Versionhistory_ResponseCompound::setBVersionhistoryDraft(const bool &b_versionhistory_draft) {
    m_b_versionhistory_draft = b_versionhistory_draft;
    m_b_versionhistory_draft_isSet = true;
}

bool Versionhistory_ResponseCompound::is_b_versionhistory_draft_Set() const{
    return m_b_versionhistory_draft_isSet;
}

bool Versionhistory_ResponseCompound::is_b_versionhistory_draft_Valid() const{
    return m_b_versionhistory_draft_isValid;
}

bool Versionhistory_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_versionhistory_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_module_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_modulesection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_module_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_modulesection_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_versionhistory_usertype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_versionhistory_detail.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_versionhistory_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_versionhistory_dateend_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_versionhistory_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_versionhistory_draft_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Versionhistory_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_versionhistory_id_isValid && m_obj_versionhistory_detail_isValid && m_dt_versionhistory_date_isValid && m_e_versionhistory_type_isValid && m_b_versionhistory_draft_isValid && true;
}

} // namespace Ezmaxapi
