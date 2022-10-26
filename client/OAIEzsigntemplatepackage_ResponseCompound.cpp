/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatepackage_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackage_ResponseCompound::OAIEzsigntemplatepackage_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackage_ResponseCompound::OAIEzsigntemplatepackage_ResponseCompound() {
    this->initializeModel();
}

OAIEzsigntemplatepackage_ResponseCompound::~OAIEzsigntemplatepackage_ResponseCompound() {}

void OAIEzsigntemplatepackage_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplatepackage_id_isSet = false;
    m_pki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_language_name_x_isSet = false;
    m_s_language_name_x_isValid = false;

    m_s_ezsigntemplatepackage_description_isSet = false;
    m_s_ezsigntemplatepackage_description_isValid = false;

    m_b_ezsigntemplatepackage_adminonly_isSet = false;
    m_b_ezsigntemplatepackage_adminonly_isValid = false;

    m_b_ezsigntemplatepackage_needvalidation_isSet = false;
    m_b_ezsigntemplatepackage_needvalidation_isValid = false;

    m_b_ezsigntemplatepackage_isactive_isSet = false;
    m_b_ezsigntemplatepackage_isactive_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_a_obj_ezsigntemplatepackagesigner_isSet = false;
    m_a_obj_ezsigntemplatepackagesigner_isValid = false;

    m_a_obj_ezsigntemplatepackagemembership_isSet = false;
    m_a_obj_ezsigntemplatepackagemembership_isValid = false;
}

void OAIEzsigntemplatepackage_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackage_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatepackage_id, json[QString("pkiEzsigntemplatepackageID")]);
    m_pki_ezsigntemplatepackage_id_isSet = !json[QString("pkiEzsigntemplatepackageID")].isNull() && m_pki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_language_name_x_isValid = ::OpenAPI::fromJsonValue(s_language_name_x, json[QString("sLanguageNameX")]);
    m_s_language_name_x_isSet = !json[QString("sLanguageNameX")].isNull() && m_s_language_name_x_isValid;

    m_s_ezsigntemplatepackage_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatepackage_description, json[QString("sEzsigntemplatepackageDescription")]);
    m_s_ezsigntemplatepackage_description_isSet = !json[QString("sEzsigntemplatepackageDescription")].isNull() && m_s_ezsigntemplatepackage_description_isValid;

    m_b_ezsigntemplatepackage_adminonly_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatepackage_adminonly, json[QString("bEzsigntemplatepackageAdminonly")]);
    m_b_ezsigntemplatepackage_adminonly_isSet = !json[QString("bEzsigntemplatepackageAdminonly")].isNull() && m_b_ezsigntemplatepackage_adminonly_isValid;

    m_b_ezsigntemplatepackage_needvalidation_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatepackage_needvalidation, json[QString("bEzsigntemplatepackageNeedvalidation")]);
    m_b_ezsigntemplatepackage_needvalidation_isSet = !json[QString("bEzsigntemplatepackageNeedvalidation")].isNull() && m_b_ezsigntemplatepackage_needvalidation_isValid;

    m_b_ezsigntemplatepackage_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatepackage_isactive, json[QString("bEzsigntemplatepackageIsactive")]);
    m_b_ezsigntemplatepackage_isactive_isSet = !json[QString("bEzsigntemplatepackageIsactive")].isNull() && m_b_ezsigntemplatepackage_isactive_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_a_obj_ezsigntemplatepackagesigner_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatepackagesigner, json[QString("a_objEzsigntemplatepackagesigner")]);
    m_a_obj_ezsigntemplatepackagesigner_isSet = !json[QString("a_objEzsigntemplatepackagesigner")].isNull() && m_a_obj_ezsigntemplatepackagesigner_isValid;

    m_a_obj_ezsigntemplatepackagemembership_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatepackagemembership, json[QString("a_objEzsigntemplatepackagemembership")]);
    m_a_obj_ezsigntemplatepackagemembership_isSet = !json[QString("a_objEzsigntemplatepackagemembership")].isNull() && m_a_obj_ezsigntemplatepackagemembership_isValid;
}

QString OAIEzsigntemplatepackage_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackage_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_language_name_x_isSet) {
        obj.insert(QString("sLanguageNameX"), ::OpenAPI::toJsonValue(s_language_name_x));
    }
    if (m_s_ezsigntemplatepackage_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackageDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplatepackage_description));
    }
    if (m_b_ezsigntemplatepackage_adminonly_isSet) {
        obj.insert(QString("bEzsigntemplatepackageAdminonly"), ::OpenAPI::toJsonValue(b_ezsigntemplatepackage_adminonly));
    }
    if (m_b_ezsigntemplatepackage_needvalidation_isSet) {
        obj.insert(QString("bEzsigntemplatepackageNeedvalidation"), ::OpenAPI::toJsonValue(b_ezsigntemplatepackage_needvalidation));
    }
    if (m_b_ezsigntemplatepackage_isactive_isSet) {
        obj.insert(QString("bEzsigntemplatepackageIsactive"), ::OpenAPI::toJsonValue(b_ezsigntemplatepackage_isactive));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    if (a_obj_ezsigntemplatepackagesigner.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackagesigner"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatepackagesigner));
    }
    if (a_obj_ezsigntemplatepackagemembership.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackagemembership"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatepackagemembership));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackage_ResponseCompound::getPkiEzsigntemplatepackageId() const {
    return pki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackage_ResponseCompound::setPkiEzsigntemplatepackageId(const qint32 &pki_ezsigntemplatepackage_id) {
    this->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    this->m_pki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_pki_ezsigntemplatepackage_id_Set() const{
    return m_pki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_pki_ezsigntemplatepackage_id_Valid() const{
    return m_pki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsigntemplatepackage_ResponseCompound::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsigntemplatepackage_ResponseCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsigntemplatepackage_ResponseCompound::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsigntemplatepackage_ResponseCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigntemplatepackage_ResponseCompound::getSLanguageNameX() const {
    return s_language_name_x;
}
void OAIEzsigntemplatepackage_ResponseCompound::setSLanguageNameX(const QString &s_language_name_x) {
    this->s_language_name_x = s_language_name_x;
    this->m_s_language_name_x_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_s_language_name_x_Set() const{
    return m_s_language_name_x_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_s_language_name_x_Valid() const{
    return m_s_language_name_x_isValid;
}

QString OAIEzsigntemplatepackage_ResponseCompound::getSEzsigntemplatepackageDescription() const {
    return s_ezsigntemplatepackage_description;
}
void OAIEzsigntemplatepackage_ResponseCompound::setSEzsigntemplatepackageDescription(const QString &s_ezsigntemplatepackage_description) {
    this->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    this->m_s_ezsigntemplatepackage_description_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_s_ezsigntemplatepackage_description_Set() const{
    return m_s_ezsigntemplatepackage_description_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_s_ezsigntemplatepackage_description_Valid() const{
    return m_s_ezsigntemplatepackage_description_isValid;
}

bool OAIEzsigntemplatepackage_ResponseCompound::isBEzsigntemplatepackageAdminonly() const {
    return b_ezsigntemplatepackage_adminonly;
}
void OAIEzsigntemplatepackage_ResponseCompound::setBEzsigntemplatepackageAdminonly(const bool &b_ezsigntemplatepackage_adminonly) {
    this->b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    this->m_b_ezsigntemplatepackage_adminonly_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_b_ezsigntemplatepackage_adminonly_Set() const{
    return m_b_ezsigntemplatepackage_adminonly_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_b_ezsigntemplatepackage_adminonly_Valid() const{
    return m_b_ezsigntemplatepackage_adminonly_isValid;
}

bool OAIEzsigntemplatepackage_ResponseCompound::isBEzsigntemplatepackageNeedvalidation() const {
    return b_ezsigntemplatepackage_needvalidation;
}
void OAIEzsigntemplatepackage_ResponseCompound::setBEzsigntemplatepackageNeedvalidation(const bool &b_ezsigntemplatepackage_needvalidation) {
    this->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    this->m_b_ezsigntemplatepackage_needvalidation_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_b_ezsigntemplatepackage_needvalidation_Set() const{
    return m_b_ezsigntemplatepackage_needvalidation_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_b_ezsigntemplatepackage_needvalidation_Valid() const{
    return m_b_ezsigntemplatepackage_needvalidation_isValid;
}

bool OAIEzsigntemplatepackage_ResponseCompound::isBEzsigntemplatepackageIsactive() const {
    return b_ezsigntemplatepackage_isactive;
}
void OAIEzsigntemplatepackage_ResponseCompound::setBEzsigntemplatepackageIsactive(const bool &b_ezsigntemplatepackage_isactive) {
    this->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    this->m_b_ezsigntemplatepackage_isactive_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_b_ezsigntemplatepackage_isactive_Set() const{
    return m_b_ezsigntemplatepackage_isactive_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_b_ezsigntemplatepackage_isactive_Valid() const{
    return m_b_ezsigntemplatepackage_isactive_isValid;
}

QString OAIEzsigntemplatepackage_ResponseCompound::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIEzsigntemplatepackage_ResponseCompound::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

QList<OAIEzsigntemplatepackagesigner_ResponseCompound> OAIEzsigntemplatepackage_ResponseCompound::getAObjEzsigntemplatepackagesigner() const {
    return a_obj_ezsigntemplatepackagesigner;
}
void OAIEzsigntemplatepackage_ResponseCompound::setAObjEzsigntemplatepackagesigner(const QList<OAIEzsigntemplatepackagesigner_ResponseCompound> &a_obj_ezsigntemplatepackagesigner) {
    this->a_obj_ezsigntemplatepackagesigner = a_obj_ezsigntemplatepackagesigner;
    this->m_a_obj_ezsigntemplatepackagesigner_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_a_obj_ezsigntemplatepackagesigner_Set() const{
    return m_a_obj_ezsigntemplatepackagesigner_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_a_obj_ezsigntemplatepackagesigner_Valid() const{
    return m_a_obj_ezsigntemplatepackagesigner_isValid;
}

QList<OAIEzsigntemplatepackagemembership_ResponseCompound> OAIEzsigntemplatepackage_ResponseCompound::getAObjEzsigntemplatepackagemembership() const {
    return a_obj_ezsigntemplatepackagemembership;
}
void OAIEzsigntemplatepackage_ResponseCompound::setAObjEzsigntemplatepackagemembership(const QList<OAIEzsigntemplatepackagemembership_ResponseCompound> &a_obj_ezsigntemplatepackagemembership) {
    this->a_obj_ezsigntemplatepackagemembership = a_obj_ezsigntemplatepackagemembership;
    this->m_a_obj_ezsigntemplatepackagemembership_isSet = true;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_a_obj_ezsigntemplatepackagemembership_Set() const{
    return m_a_obj_ezsigntemplatepackagemembership_isSet;
}

bool OAIEzsigntemplatepackage_ResponseCompound::is_a_obj_ezsigntemplatepackagemembership_Valid() const{
    return m_a_obj_ezsigntemplatepackagemembership_isValid;
}

bool OAIEzsigntemplatepackage_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
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

        if (m_s_ezsigntemplatepackage_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_adminonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_needvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsigntemplatepackagesigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsigntemplatepackagemembership.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackage_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackage_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_language_name_x_isValid && m_s_ezsigntemplatepackage_description_isValid && m_b_ezsigntemplatepackage_adminonly_isValid && m_b_ezsigntemplatepackage_needvalidation_isValid && m_b_ezsigntemplatepackage_isactive_isValid && m_s_ezsignfoldertype_name_x_isValid && m_a_obj_ezsigntemplatepackagesigner_isValid && m_a_obj_ezsigntemplatepackagemembership_isValid && true;
}

} // namespace OpenAPI
