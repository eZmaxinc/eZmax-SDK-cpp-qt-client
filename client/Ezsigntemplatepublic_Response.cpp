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

#include "Ezsigntemplatepublic_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepublic_Response::Ezsigntemplatepublic_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepublic_Response::Ezsigntemplatepublic_Response() {
    this->initializeModel();
}

Ezsigntemplatepublic_Response::~Ezsigntemplatepublic_Response() {}

void Ezsigntemplatepublic_Response::initializeModel() {

    m_pki_ezsigntemplatepublic_id_isSet = false;
    m_pki_ezsigntemplatepublic_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_fki_userlogintype_id_isSet = false;
    m_fki_userlogintype_id_isValid = false;

    m_s_userlogintype_description_x_isSet = false;
    m_s_userlogintype_description_x_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_s_ezsigntemplatepublic_description_isSet = false;
    m_s_ezsigntemplatepublic_description_isValid = false;

    m_s_ezsigntemplatepublic_referenceid_isSet = false;
    m_s_ezsigntemplatepublic_referenceid_isValid = false;

    m_b_ezsigntemplatepublic_isactive_isSet = false;
    m_b_ezsigntemplatepublic_isactive_isValid = false;

    m_t_ezsigntemplatepublic_note_isSet = false;
    m_t_ezsigntemplatepublic_note_isValid = false;

    m_e_ezsigntemplatepublic_limittype_isSet = false;
    m_e_ezsigntemplatepublic_limittype_isValid = false;

    m_i_ezsigntemplatepublic_limit_isSet = false;
    m_i_ezsigntemplatepublic_limit_isValid = false;

    m_i_ezsigntemplatepublic_limitexceeded_isSet = false;
    m_i_ezsigntemplatepublic_limitexceeded_isValid = false;

    m_dt_ezsigntemplatepublic_limitexceededsince_isSet = false;
    m_dt_ezsigntemplatepublic_limitexceededsince_isValid = false;

    m_s_ezsigntemplatepublic_url_isSet = false;
    m_s_ezsigntemplatepublic_url_isValid = false;

    m_s_ezsigntemplatepublic_ezsigntemplatedescription_isSet = false;
    m_s_ezsigntemplatepublic_ezsigntemplatedescription_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void Ezsigntemplatepublic_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepublic_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepublic_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatepublic_id, json[QString("pkiEzsigntemplatepublicID")]);
    m_pki_ezsigntemplatepublic_id_isSet = !json[QString("pkiEzsigntemplatepublicID")].isNull() && m_pki_ezsigntemplatepublic_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_fki_userlogintype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_userlogintype_id, json[QString("fkiUserlogintypeID")]);
    m_fki_userlogintype_id_isSet = !json[QString("fkiUserlogintypeID")].isNull() && m_fki_userlogintype_id_isValid;

    m_s_userlogintype_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_userlogintype_description_x, json[QString("sUserlogintypeDescriptionX")]);
    m_s_userlogintype_description_x_isSet = !json[QString("sUserlogintypeDescriptionX")].isNull() && m_s_userlogintype_description_x_isValid;

    m_fki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_s_ezsigntemplatepublic_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepublic_description, json[QString("sEzsigntemplatepublicDescription")]);
    m_s_ezsigntemplatepublic_description_isSet = !json[QString("sEzsigntemplatepublicDescription")].isNull() && m_s_ezsigntemplatepublic_description_isValid;

    m_s_ezsigntemplatepublic_referenceid_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepublic_referenceid, json[QString("sEzsigntemplatepublicReferenceid")]);
    m_s_ezsigntemplatepublic_referenceid_isSet = !json[QString("sEzsigntemplatepublicReferenceid")].isNull() && m_s_ezsigntemplatepublic_referenceid_isValid;

    m_b_ezsigntemplatepublic_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplatepublic_isactive, json[QString("bEzsigntemplatepublicIsactive")]);
    m_b_ezsigntemplatepublic_isactive_isSet = !json[QString("bEzsigntemplatepublicIsactive")].isNull() && m_b_ezsigntemplatepublic_isactive_isValid;

    m_t_ezsigntemplatepublic_note_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsigntemplatepublic_note, json[QString("tEzsigntemplatepublicNote")]);
    m_t_ezsigntemplatepublic_note_isSet = !json[QString("tEzsigntemplatepublicNote")].isNull() && m_t_ezsigntemplatepublic_note_isValid;

    m_e_ezsigntemplatepublic_limittype_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplatepublic_limittype, json[QString("eEzsigntemplatepublicLimittype")]);
    m_e_ezsigntemplatepublic_limittype_isSet = !json[QString("eEzsigntemplatepublicLimittype")].isNull() && m_e_ezsigntemplatepublic_limittype_isValid;

    m_i_ezsigntemplatepublic_limit_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatepublic_limit, json[QString("iEzsigntemplatepublicLimit")]);
    m_i_ezsigntemplatepublic_limit_isSet = !json[QString("iEzsigntemplatepublicLimit")].isNull() && m_i_ezsigntemplatepublic_limit_isValid;

    m_i_ezsigntemplatepublic_limitexceeded_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatepublic_limitexceeded, json[QString("iEzsigntemplatepublicLimitexceeded")]);
    m_i_ezsigntemplatepublic_limitexceeded_isSet = !json[QString("iEzsigntemplatepublicLimitexceeded")].isNull() && m_i_ezsigntemplatepublic_limitexceeded_isValid;

    m_dt_ezsigntemplatepublic_limitexceededsince_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsigntemplatepublic_limitexceededsince, json[QString("dtEzsigntemplatepublicLimitexceededsince")]);
    m_dt_ezsigntemplatepublic_limitexceededsince_isSet = !json[QString("dtEzsigntemplatepublicLimitexceededsince")].isNull() && m_dt_ezsigntemplatepublic_limitexceededsince_isValid;

    m_s_ezsigntemplatepublic_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepublic_url, json[QString("sEzsigntemplatepublicUrl")]);
    m_s_ezsigntemplatepublic_url_isSet = !json[QString("sEzsigntemplatepublicUrl")].isNull() && m_s_ezsigntemplatepublic_url_isValid;

    m_s_ezsigntemplatepublic_ezsigntemplatedescription_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepublic_ezsigntemplatedescription, json[QString("sEzsigntemplatepublicEzsigntemplatedescription")]);
    m_s_ezsigntemplatepublic_ezsigntemplatedescription_isSet = !json[QString("sEzsigntemplatepublicEzsigntemplatedescription")].isNull() && m_s_ezsigntemplatepublic_ezsigntemplatedescription_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString Ezsigntemplatepublic_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepublic_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepublic_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepublicID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatepublic_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_fki_userlogintype_id_isSet) {
        obj.insert(QString("fkiUserlogintypeID"), ::Ezmaxapi::toJsonValue(m_fki_userlogintype_id));
    }
    if (m_s_userlogintype_description_x_isSet) {
        obj.insert(QString("sUserlogintypeDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_userlogintype_description_x));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplate_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatepackage_id));
    }
    if (m_s_ezsigntemplatepublic_description_isSet) {
        obj.insert(QString("sEzsigntemplatepublicDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepublic_description));
    }
    if (m_s_ezsigntemplatepublic_referenceid_isSet) {
        obj.insert(QString("sEzsigntemplatepublicReferenceid"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepublic_referenceid));
    }
    if (m_b_ezsigntemplatepublic_isactive_isSet) {
        obj.insert(QString("bEzsigntemplatepublicIsactive"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplatepublic_isactive));
    }
    if (m_t_ezsigntemplatepublic_note_isSet) {
        obj.insert(QString("tEzsigntemplatepublicNote"), ::Ezmaxapi::toJsonValue(m_t_ezsigntemplatepublic_note));
    }
    if (m_e_ezsigntemplatepublic_limittype.isSet()) {
        obj.insert(QString("eEzsigntemplatepublicLimittype"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplatepublic_limittype));
    }
    if (m_i_ezsigntemplatepublic_limit_isSet) {
        obj.insert(QString("iEzsigntemplatepublicLimit"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatepublic_limit));
    }
    if (m_i_ezsigntemplatepublic_limitexceeded_isSet) {
        obj.insert(QString("iEzsigntemplatepublicLimitexceeded"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatepublic_limitexceeded));
    }
    if (m_dt_ezsigntemplatepublic_limitexceededsince_isSet) {
        obj.insert(QString("dtEzsigntemplatepublicLimitexceededsince"), ::Ezmaxapi::toJsonValue(m_dt_ezsigntemplatepublic_limitexceededsince));
    }
    if (m_s_ezsigntemplatepublic_url_isSet) {
        obj.insert(QString("sEzsigntemplatepublicUrl"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepublic_url));
    }
    if (m_s_ezsigntemplatepublic_ezsigntemplatedescription_isSet) {
        obj.insert(QString("sEzsigntemplatepublicEzsigntemplatedescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepublic_ezsigntemplatedescription));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    return obj;
}

qint32 Ezsigntemplatepublic_Response::getPkiEzsigntemplatepublicId() const {
    return m_pki_ezsigntemplatepublic_id;
}
void Ezsigntemplatepublic_Response::setPkiEzsigntemplatepublicId(const qint32 &pki_ezsigntemplatepublic_id) {
    m_pki_ezsigntemplatepublic_id = pki_ezsigntemplatepublic_id;
    m_pki_ezsigntemplatepublic_id_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_pki_ezsigntemplatepublic_id_Set() const{
    return m_pki_ezsigntemplatepublic_id_isSet;
}

bool Ezsigntemplatepublic_Response::is_pki_ezsigntemplatepublic_id_Valid() const{
    return m_pki_ezsigntemplatepublic_id_isValid;
}

qint32 Ezsigntemplatepublic_Response::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Ezsigntemplatepublic_Response::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Ezsigntemplatepublic_Response::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

QString Ezsigntemplatepublic_Response::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void Ezsigntemplatepublic_Response::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool Ezsigntemplatepublic_Response::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

qint32 Ezsigntemplatepublic_Response::getFkiUserlogintypeId() const {
    return m_fki_userlogintype_id;
}
void Ezsigntemplatepublic_Response::setFkiUserlogintypeId(const qint32 &fki_userlogintype_id) {
    m_fki_userlogintype_id = fki_userlogintype_id;
    m_fki_userlogintype_id_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_fki_userlogintype_id_Set() const{
    return m_fki_userlogintype_id_isSet;
}

bool Ezsigntemplatepublic_Response::is_fki_userlogintype_id_Valid() const{
    return m_fki_userlogintype_id_isValid;
}

QString Ezsigntemplatepublic_Response::getSUserlogintypeDescriptionX() const {
    return m_s_userlogintype_description_x;
}
void Ezsigntemplatepublic_Response::setSUserlogintypeDescriptionX(const QString &s_userlogintype_description_x) {
    m_s_userlogintype_description_x = s_userlogintype_description_x;
    m_s_userlogintype_description_x_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_s_userlogintype_description_x_Set() const{
    return m_s_userlogintype_description_x_isSet;
}

bool Ezsigntemplatepublic_Response::is_s_userlogintype_description_x_Valid() const{
    return m_s_userlogintype_description_x_isValid;
}

qint32 Ezsigntemplatepublic_Response::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void Ezsigntemplatepublic_Response::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool Ezsigntemplatepublic_Response::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 Ezsigntemplatepublic_Response::getFkiEzsigntemplatepackageId() const {
    return m_fki_ezsigntemplatepackage_id;
}
void Ezsigntemplatepublic_Response::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    m_fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool Ezsigntemplatepublic_Response::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

QString Ezsigntemplatepublic_Response::getSEzsigntemplatepublicDescription() const {
    return m_s_ezsigntemplatepublic_description;
}
void Ezsigntemplatepublic_Response::setSEzsigntemplatepublicDescription(const QString &s_ezsigntemplatepublic_description) {
    m_s_ezsigntemplatepublic_description = s_ezsigntemplatepublic_description;
    m_s_ezsigntemplatepublic_description_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_s_ezsigntemplatepublic_description_Set() const{
    return m_s_ezsigntemplatepublic_description_isSet;
}

bool Ezsigntemplatepublic_Response::is_s_ezsigntemplatepublic_description_Valid() const{
    return m_s_ezsigntemplatepublic_description_isValid;
}

QString Ezsigntemplatepublic_Response::getSEzsigntemplatepublicReferenceid() const {
    return m_s_ezsigntemplatepublic_referenceid;
}
void Ezsigntemplatepublic_Response::setSEzsigntemplatepublicReferenceid(const QString &s_ezsigntemplatepublic_referenceid) {
    m_s_ezsigntemplatepublic_referenceid = s_ezsigntemplatepublic_referenceid;
    m_s_ezsigntemplatepublic_referenceid_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_s_ezsigntemplatepublic_referenceid_Set() const{
    return m_s_ezsigntemplatepublic_referenceid_isSet;
}

bool Ezsigntemplatepublic_Response::is_s_ezsigntemplatepublic_referenceid_Valid() const{
    return m_s_ezsigntemplatepublic_referenceid_isValid;
}

bool Ezsigntemplatepublic_Response::isBEzsigntemplatepublicIsactive() const {
    return m_b_ezsigntemplatepublic_isactive;
}
void Ezsigntemplatepublic_Response::setBEzsigntemplatepublicIsactive(const bool &b_ezsigntemplatepublic_isactive) {
    m_b_ezsigntemplatepublic_isactive = b_ezsigntemplatepublic_isactive;
    m_b_ezsigntemplatepublic_isactive_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_b_ezsigntemplatepublic_isactive_Set() const{
    return m_b_ezsigntemplatepublic_isactive_isSet;
}

bool Ezsigntemplatepublic_Response::is_b_ezsigntemplatepublic_isactive_Valid() const{
    return m_b_ezsigntemplatepublic_isactive_isValid;
}

QString Ezsigntemplatepublic_Response::getTEzsigntemplatepublicNote() const {
    return m_t_ezsigntemplatepublic_note;
}
void Ezsigntemplatepublic_Response::setTEzsigntemplatepublicNote(const QString &t_ezsigntemplatepublic_note) {
    m_t_ezsigntemplatepublic_note = t_ezsigntemplatepublic_note;
    m_t_ezsigntemplatepublic_note_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_t_ezsigntemplatepublic_note_Set() const{
    return m_t_ezsigntemplatepublic_note_isSet;
}

bool Ezsigntemplatepublic_Response::is_t_ezsigntemplatepublic_note_Valid() const{
    return m_t_ezsigntemplatepublic_note_isValid;
}

Field_eEzsigntemplatepublicLimittype Ezsigntemplatepublic_Response::getEEzsigntemplatepublicLimittype() const {
    return m_e_ezsigntemplatepublic_limittype;
}
void Ezsigntemplatepublic_Response::setEEzsigntemplatepublicLimittype(const Field_eEzsigntemplatepublicLimittype &e_ezsigntemplatepublic_limittype) {
    m_e_ezsigntemplatepublic_limittype = e_ezsigntemplatepublic_limittype;
    m_e_ezsigntemplatepublic_limittype_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_e_ezsigntemplatepublic_limittype_Set() const{
    return m_e_ezsigntemplatepublic_limittype_isSet;
}

bool Ezsigntemplatepublic_Response::is_e_ezsigntemplatepublic_limittype_Valid() const{
    return m_e_ezsigntemplatepublic_limittype_isValid;
}

qint32 Ezsigntemplatepublic_Response::getIEzsigntemplatepublicLimit() const {
    return m_i_ezsigntemplatepublic_limit;
}
void Ezsigntemplatepublic_Response::setIEzsigntemplatepublicLimit(const qint32 &i_ezsigntemplatepublic_limit) {
    m_i_ezsigntemplatepublic_limit = i_ezsigntemplatepublic_limit;
    m_i_ezsigntemplatepublic_limit_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_i_ezsigntemplatepublic_limit_Set() const{
    return m_i_ezsigntemplatepublic_limit_isSet;
}

bool Ezsigntemplatepublic_Response::is_i_ezsigntemplatepublic_limit_Valid() const{
    return m_i_ezsigntemplatepublic_limit_isValid;
}

qint32 Ezsigntemplatepublic_Response::getIEzsigntemplatepublicLimitexceeded() const {
    return m_i_ezsigntemplatepublic_limitexceeded;
}
void Ezsigntemplatepublic_Response::setIEzsigntemplatepublicLimitexceeded(const qint32 &i_ezsigntemplatepublic_limitexceeded) {
    m_i_ezsigntemplatepublic_limitexceeded = i_ezsigntemplatepublic_limitexceeded;
    m_i_ezsigntemplatepublic_limitexceeded_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_i_ezsigntemplatepublic_limitexceeded_Set() const{
    return m_i_ezsigntemplatepublic_limitexceeded_isSet;
}

bool Ezsigntemplatepublic_Response::is_i_ezsigntemplatepublic_limitexceeded_Valid() const{
    return m_i_ezsigntemplatepublic_limitexceeded_isValid;
}

QString Ezsigntemplatepublic_Response::getDtEzsigntemplatepublicLimitexceededsince() const {
    return m_dt_ezsigntemplatepublic_limitexceededsince;
}
void Ezsigntemplatepublic_Response::setDtEzsigntemplatepublicLimitexceededsince(const QString &dt_ezsigntemplatepublic_limitexceededsince) {
    m_dt_ezsigntemplatepublic_limitexceededsince = dt_ezsigntemplatepublic_limitexceededsince;
    m_dt_ezsigntemplatepublic_limitexceededsince_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_dt_ezsigntemplatepublic_limitexceededsince_Set() const{
    return m_dt_ezsigntemplatepublic_limitexceededsince_isSet;
}

bool Ezsigntemplatepublic_Response::is_dt_ezsigntemplatepublic_limitexceededsince_Valid() const{
    return m_dt_ezsigntemplatepublic_limitexceededsince_isValid;
}

QString Ezsigntemplatepublic_Response::getSEzsigntemplatepublicUrl() const {
    return m_s_ezsigntemplatepublic_url;
}
void Ezsigntemplatepublic_Response::setSEzsigntemplatepublicUrl(const QString &s_ezsigntemplatepublic_url) {
    m_s_ezsigntemplatepublic_url = s_ezsigntemplatepublic_url;
    m_s_ezsigntemplatepublic_url_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_s_ezsigntemplatepublic_url_Set() const{
    return m_s_ezsigntemplatepublic_url_isSet;
}

bool Ezsigntemplatepublic_Response::is_s_ezsigntemplatepublic_url_Valid() const{
    return m_s_ezsigntemplatepublic_url_isValid;
}

QString Ezsigntemplatepublic_Response::getSEzsigntemplatepublicEzsigntemplatedescription() const {
    return m_s_ezsigntemplatepublic_ezsigntemplatedescription;
}
void Ezsigntemplatepublic_Response::setSEzsigntemplatepublicEzsigntemplatedescription(const QString &s_ezsigntemplatepublic_ezsigntemplatedescription) {
    m_s_ezsigntemplatepublic_ezsigntemplatedescription = s_ezsigntemplatepublic_ezsigntemplatedescription;
    m_s_ezsigntemplatepublic_ezsigntemplatedescription_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_s_ezsigntemplatepublic_ezsigntemplatedescription_Set() const{
    return m_s_ezsigntemplatepublic_ezsigntemplatedescription_isSet;
}

bool Ezsigntemplatepublic_Response::is_s_ezsigntemplatepublic_ezsigntemplatedescription_Valid() const{
    return m_s_ezsigntemplatepublic_ezsigntemplatedescription_isValid;
}

Common_Audit Ezsigntemplatepublic_Response::getObjAudit() const {
    return m_obj_audit;
}
void Ezsigntemplatepublic_Response::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Ezsigntemplatepublic_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Ezsigntemplatepublic_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool Ezsigntemplatepublic_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepublic_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_userlogintype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_userlogintype_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepublic_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepublic_referenceid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepublic_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsigntemplatepublic_note_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatepublic_limittype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatepublic_limit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatepublic_limitexceeded_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsigntemplatepublic_limitexceededsince_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepublic_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepublic_ezsigntemplatedescription_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepublic_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepublic_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_s_ezsignfoldertype_name_x_isValid && m_fki_userlogintype_id_isValid && m_s_userlogintype_description_x_isValid && m_s_ezsigntemplatepublic_description_isValid && m_s_ezsigntemplatepublic_referenceid_isValid && m_b_ezsigntemplatepublic_isactive_isValid && m_t_ezsigntemplatepublic_note_isValid && m_e_ezsigntemplatepublic_limittype_isValid && m_i_ezsigntemplatepublic_limit_isValid && m_i_ezsigntemplatepublic_limitexceeded_isValid && m_dt_ezsigntemplatepublic_limitexceededsince_isValid && m_s_ezsigntemplatepublic_url_isValid && m_s_ezsigntemplatepublic_ezsigntemplatedescription_isValid && true;
}

} // namespace Ezmaxapi
