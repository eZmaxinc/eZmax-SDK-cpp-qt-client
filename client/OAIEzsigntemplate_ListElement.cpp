/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplate_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplate_ListElement::OAIEzsigntemplate_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplate_ListElement::OAIEzsigntemplate_ListElement() {
    this->initializeModel();
}

OAIEzsigntemplate_ListElement::~OAIEzsigntemplate_ListElement() {}

void OAIEzsigntemplate_ListElement::initializeModel() {

    m_pki_ezsigntemplate_id_isSet = false;
    m_pki_ezsigntemplate_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_ezsigntemplate_description_isSet = false;
    m_s_ezsigntemplate_description_isValid = false;

    m_i_ezsigntemplatedocument_pagetotal_isSet = false;
    m_i_ezsigntemplatedocument_pagetotal_isValid = false;

    m_i_ezsigntemplate_signaturetotal_isSet = false;
    m_i_ezsigntemplate_signaturetotal_isValid = false;

    m_i_ezsigntemplate_formfieldtotal_isSet = false;
    m_i_ezsigntemplate_formfieldtotal_isValid = false;

    m_b_ezsigntemplate_incomplete_isSet = false;
    m_b_ezsigntemplate_incomplete_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;
}

void OAIEzsigntemplate_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplate_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplate_id, json[QString("pkiEzsigntemplateID")]);
    m_pki_ezsigntemplate_id_isSet = !json[QString("pkiEzsigntemplateID")].isNull() && m_pki_ezsigntemplate_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsigntemplate_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplate_description, json[QString("sEzsigntemplateDescription")]);
    m_s_ezsigntemplate_description_isSet = !json[QString("sEzsigntemplateDescription")].isNull() && m_s_ezsigntemplate_description_isValid;

    m_i_ezsigntemplatedocument_pagetotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocument_pagetotal, json[QString("iEzsigntemplatedocumentPagetotal")]);
    m_i_ezsigntemplatedocument_pagetotal_isSet = !json[QString("iEzsigntemplatedocumentPagetotal")].isNull() && m_i_ezsigntemplatedocument_pagetotal_isValid;

    m_i_ezsigntemplate_signaturetotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplate_signaturetotal, json[QString("iEzsigntemplateSignaturetotal")]);
    m_i_ezsigntemplate_signaturetotal_isSet = !json[QString("iEzsigntemplateSignaturetotal")].isNull() && m_i_ezsigntemplate_signaturetotal_isValid;

    m_i_ezsigntemplate_formfieldtotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplate_formfieldtotal, json[QString("iEzsigntemplateFormfieldtotal")]);
    m_i_ezsigntemplate_formfieldtotal_isSet = !json[QString("iEzsigntemplateFormfieldtotal")].isNull() && m_i_ezsigntemplate_formfieldtotal_isValid;

    m_b_ezsigntemplate_incomplete_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplate_incomplete, json[QString("bEzsigntemplateIncomplete")]);
    m_b_ezsigntemplate_incomplete_isSet = !json[QString("bEzsigntemplateIncomplete")].isNull() && m_b_ezsigntemplate_incomplete_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;
}

QString OAIEzsigntemplate_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplate_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateID"), ::OpenAPI::toJsonValue(pki_ezsigntemplate_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_ezsigntemplate_description_isSet) {
        obj.insert(QString("sEzsigntemplateDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplate_description));
    }
    if (m_i_ezsigntemplatedocument_pagetotal_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentPagetotal"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocument_pagetotal));
    }
    if (m_i_ezsigntemplate_signaturetotal_isSet) {
        obj.insert(QString("iEzsigntemplateSignaturetotal"), ::OpenAPI::toJsonValue(i_ezsigntemplate_signaturetotal));
    }
    if (m_i_ezsigntemplate_formfieldtotal_isSet) {
        obj.insert(QString("iEzsigntemplateFormfieldtotal"), ::OpenAPI::toJsonValue(i_ezsigntemplate_formfieldtotal));
    }
    if (m_b_ezsigntemplate_incomplete_isSet) {
        obj.insert(QString("bEzsigntemplateIncomplete"), ::OpenAPI::toJsonValue(b_ezsigntemplate_incomplete));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    return obj;
}

qint32 OAIEzsigntemplate_ListElement::getPkiEzsigntemplateId() const {
    return pki_ezsigntemplate_id;
}
void OAIEzsigntemplate_ListElement::setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id) {
    this->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    this->m_pki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplate_ListElement::is_pki_ezsigntemplate_id_Set() const{
    return m_pki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplate_ListElement::is_pki_ezsigntemplate_id_Valid() const{
    return m_pki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsigntemplate_ListElement::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsigntemplate_ListElement::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsigntemplate_ListElement::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsigntemplate_ListElement::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsigntemplate_ListElement::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsigntemplate_ListElement::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsigntemplate_ListElement::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigntemplate_ListElement::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigntemplate_ListElement::getSEzsigntemplateDescription() const {
    return s_ezsigntemplate_description;
}
void OAIEzsigntemplate_ListElement::setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description) {
    this->s_ezsigntemplate_description = s_ezsigntemplate_description;
    this->m_s_ezsigntemplate_description_isSet = true;
}

bool OAIEzsigntemplate_ListElement::is_s_ezsigntemplate_description_Set() const{
    return m_s_ezsigntemplate_description_isSet;
}

bool OAIEzsigntemplate_ListElement::is_s_ezsigntemplate_description_Valid() const{
    return m_s_ezsigntemplate_description_isValid;
}

qint32 OAIEzsigntemplate_ListElement::getIEzsigntemplatedocumentPagetotal() const {
    return i_ezsigntemplatedocument_pagetotal;
}
void OAIEzsigntemplate_ListElement::setIEzsigntemplatedocumentPagetotal(const qint32 &i_ezsigntemplatedocument_pagetotal) {
    this->i_ezsigntemplatedocument_pagetotal = i_ezsigntemplatedocument_pagetotal;
    this->m_i_ezsigntemplatedocument_pagetotal_isSet = true;
}

bool OAIEzsigntemplate_ListElement::is_i_ezsigntemplatedocument_pagetotal_Set() const{
    return m_i_ezsigntemplatedocument_pagetotal_isSet;
}

bool OAIEzsigntemplate_ListElement::is_i_ezsigntemplatedocument_pagetotal_Valid() const{
    return m_i_ezsigntemplatedocument_pagetotal_isValid;
}

qint32 OAIEzsigntemplate_ListElement::getIEzsigntemplateSignaturetotal() const {
    return i_ezsigntemplate_signaturetotal;
}
void OAIEzsigntemplate_ListElement::setIEzsigntemplateSignaturetotal(const qint32 &i_ezsigntemplate_signaturetotal) {
    this->i_ezsigntemplate_signaturetotal = i_ezsigntemplate_signaturetotal;
    this->m_i_ezsigntemplate_signaturetotal_isSet = true;
}

bool OAIEzsigntemplate_ListElement::is_i_ezsigntemplate_signaturetotal_Set() const{
    return m_i_ezsigntemplate_signaturetotal_isSet;
}

bool OAIEzsigntemplate_ListElement::is_i_ezsigntemplate_signaturetotal_Valid() const{
    return m_i_ezsigntemplate_signaturetotal_isValid;
}

qint32 OAIEzsigntemplate_ListElement::getIEzsigntemplateFormfieldtotal() const {
    return i_ezsigntemplate_formfieldtotal;
}
void OAIEzsigntemplate_ListElement::setIEzsigntemplateFormfieldtotal(const qint32 &i_ezsigntemplate_formfieldtotal) {
    this->i_ezsigntemplate_formfieldtotal = i_ezsigntemplate_formfieldtotal;
    this->m_i_ezsigntemplate_formfieldtotal_isSet = true;
}

bool OAIEzsigntemplate_ListElement::is_i_ezsigntemplate_formfieldtotal_Set() const{
    return m_i_ezsigntemplate_formfieldtotal_isSet;
}

bool OAIEzsigntemplate_ListElement::is_i_ezsigntemplate_formfieldtotal_Valid() const{
    return m_i_ezsigntemplate_formfieldtotal_isValid;
}

bool OAIEzsigntemplate_ListElement::isBEzsigntemplateIncomplete() const {
    return b_ezsigntemplate_incomplete;
}
void OAIEzsigntemplate_ListElement::setBEzsigntemplateIncomplete(const bool &b_ezsigntemplate_incomplete) {
    this->b_ezsigntemplate_incomplete = b_ezsigntemplate_incomplete;
    this->m_b_ezsigntemplate_incomplete_isSet = true;
}

bool OAIEzsigntemplate_ListElement::is_b_ezsigntemplate_incomplete_Set() const{
    return m_b_ezsigntemplate_incomplete_isSet;
}

bool OAIEzsigntemplate_ListElement::is_b_ezsigntemplate_incomplete_Valid() const{
    return m_b_ezsigntemplate_incomplete_isValid;
}

QString OAIEzsigntemplate_ListElement::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIEzsigntemplate_ListElement::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsigntemplate_ListElement::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsigntemplate_ListElement::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

bool OAIEzsigntemplate_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplate_id_isSet) {
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

        if (m_s_ezsigntemplate_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocument_pagetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplate_signaturetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplate_formfieldtotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplate_incomplete_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplate_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplate_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_ezsigntemplate_description_isValid && m_b_ezsigntemplate_incomplete_isValid && m_s_ezsignfoldertype_name_x_isValid && true;
}

} // namespace OpenAPI
