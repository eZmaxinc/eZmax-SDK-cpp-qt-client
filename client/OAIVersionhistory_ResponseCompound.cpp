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

#include "OAIVersionhistory_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIVersionhistory_ResponseCompound::OAIVersionhistory_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVersionhistory_ResponseCompound::OAIVersionhistory_ResponseCompound() {
    this->initializeModel();
}

OAIVersionhistory_ResponseCompound::~OAIVersionhistory_ResponseCompound() {}

void OAIVersionhistory_ResponseCompound::initializeModel() {

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

void OAIVersionhistory_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVersionhistory_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_versionhistory_id_isValid = ::OpenAPI::fromJsonValue(pki_versionhistory_id, json[QString("pkiVersionhistoryID")]);
    m_pki_versionhistory_id_isSet = !json[QString("pkiVersionhistoryID")].isNull() && m_pki_versionhistory_id_isValid;

    m_fki_module_id_isValid = ::OpenAPI::fromJsonValue(fki_module_id, json[QString("fkiModuleID")]);
    m_fki_module_id_isSet = !json[QString("fkiModuleID")].isNull() && m_fki_module_id_isValid;

    m_fki_modulesection_id_isValid = ::OpenAPI::fromJsonValue(fki_modulesection_id, json[QString("fkiModulesectionID")]);
    m_fki_modulesection_id_isSet = !json[QString("fkiModulesectionID")].isNull() && m_fki_modulesection_id_isValid;

    m_s_module_name_x_isValid = ::OpenAPI::fromJsonValue(s_module_name_x, json[QString("sModuleNameX")]);
    m_s_module_name_x_isSet = !json[QString("sModuleNameX")].isNull() && m_s_module_name_x_isValid;

    m_s_modulesection_name_x_isValid = ::OpenAPI::fromJsonValue(s_modulesection_name_x, json[QString("sModulesectionNameX")]);
    m_s_modulesection_name_x_isSet = !json[QString("sModulesectionNameX")].isNull() && m_s_modulesection_name_x_isValid;

    m_e_versionhistory_usertype_isValid = ::OpenAPI::fromJsonValue(e_versionhistory_usertype, json[QString("eVersionhistoryUsertype")]);
    m_e_versionhistory_usertype_isSet = !json[QString("eVersionhistoryUsertype")].isNull() && m_e_versionhistory_usertype_isValid;

    m_obj_versionhistory_detail_isValid = ::OpenAPI::fromJsonValue(obj_versionhistory_detail, json[QString("objVersionhistoryDetail")]);
    m_obj_versionhistory_detail_isSet = !json[QString("objVersionhistoryDetail")].isNull() && m_obj_versionhistory_detail_isValid;

    m_dt_versionhistory_date_isValid = ::OpenAPI::fromJsonValue(dt_versionhistory_date, json[QString("dtVersionhistoryDate")]);
    m_dt_versionhistory_date_isSet = !json[QString("dtVersionhistoryDate")].isNull() && m_dt_versionhistory_date_isValid;

    m_dt_versionhistory_dateend_isValid = ::OpenAPI::fromJsonValue(dt_versionhistory_dateend, json[QString("dtVersionhistoryDateend")]);
    m_dt_versionhistory_dateend_isSet = !json[QString("dtVersionhistoryDateend")].isNull() && m_dt_versionhistory_dateend_isValid;

    m_e_versionhistory_type_isValid = ::OpenAPI::fromJsonValue(e_versionhistory_type, json[QString("eVersionhistoryType")]);
    m_e_versionhistory_type_isSet = !json[QString("eVersionhistoryType")].isNull() && m_e_versionhistory_type_isValid;

    m_b_versionhistory_draft_isValid = ::OpenAPI::fromJsonValue(b_versionhistory_draft, json[QString("bVersionhistoryDraft")]);
    m_b_versionhistory_draft_isSet = !json[QString("bVersionhistoryDraft")].isNull() && m_b_versionhistory_draft_isValid;
}

QString OAIVersionhistory_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVersionhistory_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_versionhistory_id_isSet) {
        obj.insert(QString("pkiVersionhistoryID"), ::OpenAPI::toJsonValue(pki_versionhistory_id));
    }
    if (m_fki_module_id_isSet) {
        obj.insert(QString("fkiModuleID"), ::OpenAPI::toJsonValue(fki_module_id));
    }
    if (m_fki_modulesection_id_isSet) {
        obj.insert(QString("fkiModulesectionID"), ::OpenAPI::toJsonValue(fki_modulesection_id));
    }
    if (m_s_module_name_x_isSet) {
        obj.insert(QString("sModuleNameX"), ::OpenAPI::toJsonValue(s_module_name_x));
    }
    if (m_s_modulesection_name_x_isSet) {
        obj.insert(QString("sModulesectionNameX"), ::OpenAPI::toJsonValue(s_modulesection_name_x));
    }
    if (e_versionhistory_usertype.isSet()) {
        obj.insert(QString("eVersionhistoryUsertype"), ::OpenAPI::toJsonValue(e_versionhistory_usertype));
    }
    if (obj_versionhistory_detail.isSet()) {
        obj.insert(QString("objVersionhistoryDetail"), ::OpenAPI::toJsonValue(obj_versionhistory_detail));
    }
    if (m_dt_versionhistory_date_isSet) {
        obj.insert(QString("dtVersionhistoryDate"), ::OpenAPI::toJsonValue(dt_versionhistory_date));
    }
    if (m_dt_versionhistory_dateend_isSet) {
        obj.insert(QString("dtVersionhistoryDateend"), ::OpenAPI::toJsonValue(dt_versionhistory_dateend));
    }
    if (e_versionhistory_type.isSet()) {
        obj.insert(QString("eVersionhistoryType"), ::OpenAPI::toJsonValue(e_versionhistory_type));
    }
    if (m_b_versionhistory_draft_isSet) {
        obj.insert(QString("bVersionhistoryDraft"), ::OpenAPI::toJsonValue(b_versionhistory_draft));
    }
    return obj;
}

qint32 OAIVersionhistory_ResponseCompound::getPkiVersionhistoryId() const {
    return pki_versionhistory_id;
}
void OAIVersionhistory_ResponseCompound::setPkiVersionhistoryId(const qint32 &pki_versionhistory_id) {
    this->pki_versionhistory_id = pki_versionhistory_id;
    this->m_pki_versionhistory_id_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_pki_versionhistory_id_Set() const{
    return m_pki_versionhistory_id_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_pki_versionhistory_id_Valid() const{
    return m_pki_versionhistory_id_isValid;
}

qint32 OAIVersionhistory_ResponseCompound::getFkiModuleId() const {
    return fki_module_id;
}
void OAIVersionhistory_ResponseCompound::setFkiModuleId(const qint32 &fki_module_id) {
    this->fki_module_id = fki_module_id;
    this->m_fki_module_id_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_fki_module_id_Set() const{
    return m_fki_module_id_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_fki_module_id_Valid() const{
    return m_fki_module_id_isValid;
}

qint32 OAIVersionhistory_ResponseCompound::getFkiModulesectionId() const {
    return fki_modulesection_id;
}
void OAIVersionhistory_ResponseCompound::setFkiModulesectionId(const qint32 &fki_modulesection_id) {
    this->fki_modulesection_id = fki_modulesection_id;
    this->m_fki_modulesection_id_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_fki_modulesection_id_Set() const{
    return m_fki_modulesection_id_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_fki_modulesection_id_Valid() const{
    return m_fki_modulesection_id_isValid;
}

QString OAIVersionhistory_ResponseCompound::getSModuleNameX() const {
    return s_module_name_x;
}
void OAIVersionhistory_ResponseCompound::setSModuleNameX(const QString &s_module_name_x) {
    this->s_module_name_x = s_module_name_x;
    this->m_s_module_name_x_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_s_module_name_x_Set() const{
    return m_s_module_name_x_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_s_module_name_x_Valid() const{
    return m_s_module_name_x_isValid;
}

QString OAIVersionhistory_ResponseCompound::getSModulesectionNameX() const {
    return s_modulesection_name_x;
}
void OAIVersionhistory_ResponseCompound::setSModulesectionNameX(const QString &s_modulesection_name_x) {
    this->s_modulesection_name_x = s_modulesection_name_x;
    this->m_s_modulesection_name_x_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_s_modulesection_name_x_Set() const{
    return m_s_modulesection_name_x_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_s_modulesection_name_x_Valid() const{
    return m_s_modulesection_name_x_isValid;
}

OAIField_eVersionhistoryUsertype OAIVersionhistory_ResponseCompound::getEVersionhistoryUsertype() const {
    return e_versionhistory_usertype;
}
void OAIVersionhistory_ResponseCompound::setEVersionhistoryUsertype(const OAIField_eVersionhistoryUsertype &e_versionhistory_usertype) {
    this->e_versionhistory_usertype = e_versionhistory_usertype;
    this->m_e_versionhistory_usertype_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_e_versionhistory_usertype_Set() const{
    return m_e_versionhistory_usertype_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_e_versionhistory_usertype_Valid() const{
    return m_e_versionhistory_usertype_isValid;
}

OAIMultilingual_VersionhistoryDetail OAIVersionhistory_ResponseCompound::getObjVersionhistoryDetail() const {
    return obj_versionhistory_detail;
}
void OAIVersionhistory_ResponseCompound::setObjVersionhistoryDetail(const OAIMultilingual_VersionhistoryDetail &obj_versionhistory_detail) {
    this->obj_versionhistory_detail = obj_versionhistory_detail;
    this->m_obj_versionhistory_detail_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_obj_versionhistory_detail_Set() const{
    return m_obj_versionhistory_detail_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_obj_versionhistory_detail_Valid() const{
    return m_obj_versionhistory_detail_isValid;
}

QString OAIVersionhistory_ResponseCompound::getDtVersionhistoryDate() const {
    return dt_versionhistory_date;
}
void OAIVersionhistory_ResponseCompound::setDtVersionhistoryDate(const QString &dt_versionhistory_date) {
    this->dt_versionhistory_date = dt_versionhistory_date;
    this->m_dt_versionhistory_date_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_dt_versionhistory_date_Set() const{
    return m_dt_versionhistory_date_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_dt_versionhistory_date_Valid() const{
    return m_dt_versionhistory_date_isValid;
}

QString OAIVersionhistory_ResponseCompound::getDtVersionhistoryDateend() const {
    return dt_versionhistory_dateend;
}
void OAIVersionhistory_ResponseCompound::setDtVersionhistoryDateend(const QString &dt_versionhistory_dateend) {
    this->dt_versionhistory_dateend = dt_versionhistory_dateend;
    this->m_dt_versionhistory_dateend_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_dt_versionhistory_dateend_Set() const{
    return m_dt_versionhistory_dateend_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_dt_versionhistory_dateend_Valid() const{
    return m_dt_versionhistory_dateend_isValid;
}

OAIField_eVersionhistoryType OAIVersionhistory_ResponseCompound::getEVersionhistoryType() const {
    return e_versionhistory_type;
}
void OAIVersionhistory_ResponseCompound::setEVersionhistoryType(const OAIField_eVersionhistoryType &e_versionhistory_type) {
    this->e_versionhistory_type = e_versionhistory_type;
    this->m_e_versionhistory_type_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_e_versionhistory_type_Set() const{
    return m_e_versionhistory_type_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_e_versionhistory_type_Valid() const{
    return m_e_versionhistory_type_isValid;
}

bool OAIVersionhistory_ResponseCompound::isBVersionhistoryDraft() const {
    return b_versionhistory_draft;
}
void OAIVersionhistory_ResponseCompound::setBVersionhistoryDraft(const bool &b_versionhistory_draft) {
    this->b_versionhistory_draft = b_versionhistory_draft;
    this->m_b_versionhistory_draft_isSet = true;
}

bool OAIVersionhistory_ResponseCompound::is_b_versionhistory_draft_Set() const{
    return m_b_versionhistory_draft_isSet;
}

bool OAIVersionhistory_ResponseCompound::is_b_versionhistory_draft_Valid() const{
    return m_b_versionhistory_draft_isValid;
}

bool OAIVersionhistory_ResponseCompound::isSet() const {
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

        if (e_versionhistory_usertype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_versionhistory_detail.isSet()) {
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

        if (e_versionhistory_type.isSet()) {
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

bool OAIVersionhistory_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_versionhistory_id_isValid && m_obj_versionhistory_detail_isValid && m_dt_versionhistory_date_isValid && m_e_versionhistory_type_isValid && m_b_versionhistory_draft_isValid && true;
}

} // namespace OpenAPI
