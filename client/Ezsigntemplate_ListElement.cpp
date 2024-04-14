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

#include "Ezsigntemplate_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplate_ListElement::Ezsigntemplate_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplate_ListElement::Ezsigntemplate_ListElement() {
    this->initializeModel();
}

Ezsigntemplate_ListElement::~Ezsigntemplate_ListElement() {}

void Ezsigntemplate_ListElement::initializeModel() {

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

    m_e_ezsigntemplate_type_isSet = false;
    m_e_ezsigntemplate_type_isValid = false;
}

void Ezsigntemplate_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplate_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplate_id, json[QString("pkiEzsigntemplateID")]);
    m_pki_ezsigntemplate_id_isSet = !json[QString("pkiEzsigntemplateID")].isNull() && m_pki_ezsigntemplate_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsigntemplate_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplate_description, json[QString("sEzsigntemplateDescription")]);
    m_s_ezsigntemplate_description_isSet = !json[QString("sEzsigntemplateDescription")].isNull() && m_s_ezsigntemplate_description_isValid;

    m_i_ezsigntemplatedocument_pagetotal_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocument_pagetotal, json[QString("iEzsigntemplatedocumentPagetotal")]);
    m_i_ezsigntemplatedocument_pagetotal_isSet = !json[QString("iEzsigntemplatedocumentPagetotal")].isNull() && m_i_ezsigntemplatedocument_pagetotal_isValid;

    m_i_ezsigntemplate_signaturetotal_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplate_signaturetotal, json[QString("iEzsigntemplateSignaturetotal")]);
    m_i_ezsigntemplate_signaturetotal_isSet = !json[QString("iEzsigntemplateSignaturetotal")].isNull() && m_i_ezsigntemplate_signaturetotal_isValid;

    m_i_ezsigntemplate_formfieldtotal_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplate_formfieldtotal, json[QString("iEzsigntemplateFormfieldtotal")]);
    m_i_ezsigntemplate_formfieldtotal_isSet = !json[QString("iEzsigntemplateFormfieldtotal")].isNull() && m_i_ezsigntemplate_formfieldtotal_isValid;

    m_b_ezsigntemplate_incomplete_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplate_incomplete, json[QString("bEzsigntemplateIncomplete")]);
    m_b_ezsigntemplate_incomplete_isSet = !json[QString("bEzsigntemplateIncomplete")].isNull() && m_b_ezsigntemplate_incomplete_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_e_ezsigntemplate_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplate_type, json[QString("eEzsigntemplateType")]);
    m_e_ezsigntemplate_type_isSet = !json[QString("eEzsigntemplateType")].isNull() && m_e_ezsigntemplate_type_isValid;
}

QString Ezsigntemplate_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplate_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplate_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_s_ezsigntemplate_description_isSet) {
        obj.insert(QString("sEzsigntemplateDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplate_description));
    }
    if (m_i_ezsigntemplatedocument_pagetotal_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentPagetotal"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocument_pagetotal));
    }
    if (m_i_ezsigntemplate_signaturetotal_isSet) {
        obj.insert(QString("iEzsigntemplateSignaturetotal"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplate_signaturetotal));
    }
    if (m_i_ezsigntemplate_formfieldtotal_isSet) {
        obj.insert(QString("iEzsigntemplateFormfieldtotal"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplate_formfieldtotal));
    }
    if (m_b_ezsigntemplate_incomplete_isSet) {
        obj.insert(QString("bEzsigntemplateIncomplete"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplate_incomplete));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_e_ezsigntemplate_type.isSet()) {
        obj.insert(QString("eEzsigntemplateType"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplate_type));
    }
    return obj;
}

qint32 Ezsigntemplate_ListElement::getPkiEzsigntemplateId() const {
    return m_pki_ezsigntemplate_id;
}
void Ezsigntemplate_ListElement::setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id) {
    m_pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    m_pki_ezsigntemplate_id_isSet = true;
}

bool Ezsigntemplate_ListElement::is_pki_ezsigntemplate_id_Set() const{
    return m_pki_ezsigntemplate_id_isSet;
}

bool Ezsigntemplate_ListElement::is_pki_ezsigntemplate_id_Valid() const{
    return m_pki_ezsigntemplate_id_isValid;
}

qint32 Ezsigntemplate_ListElement::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Ezsigntemplate_ListElement::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezsigntemplate_ListElement::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Ezsigntemplate_ListElement::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 Ezsigntemplate_ListElement::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Ezsigntemplate_ListElement::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Ezsigntemplate_ListElement::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Ezsigntemplate_ListElement::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString Ezsigntemplate_ListElement::getSEzsigntemplateDescription() const {
    return m_s_ezsigntemplate_description;
}
void Ezsigntemplate_ListElement::setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description) {
    m_s_ezsigntemplate_description = s_ezsigntemplate_description;
    m_s_ezsigntemplate_description_isSet = true;
}

bool Ezsigntemplate_ListElement::is_s_ezsigntemplate_description_Set() const{
    return m_s_ezsigntemplate_description_isSet;
}

bool Ezsigntemplate_ListElement::is_s_ezsigntemplate_description_Valid() const{
    return m_s_ezsigntemplate_description_isValid;
}

qint32 Ezsigntemplate_ListElement::getIEzsigntemplatedocumentPagetotal() const {
    return m_i_ezsigntemplatedocument_pagetotal;
}
void Ezsigntemplate_ListElement::setIEzsigntemplatedocumentPagetotal(const qint32 &i_ezsigntemplatedocument_pagetotal) {
    m_i_ezsigntemplatedocument_pagetotal = i_ezsigntemplatedocument_pagetotal;
    m_i_ezsigntemplatedocument_pagetotal_isSet = true;
}

bool Ezsigntemplate_ListElement::is_i_ezsigntemplatedocument_pagetotal_Set() const{
    return m_i_ezsigntemplatedocument_pagetotal_isSet;
}

bool Ezsigntemplate_ListElement::is_i_ezsigntemplatedocument_pagetotal_Valid() const{
    return m_i_ezsigntemplatedocument_pagetotal_isValid;
}

qint32 Ezsigntemplate_ListElement::getIEzsigntemplateSignaturetotal() const {
    return m_i_ezsigntemplate_signaturetotal;
}
void Ezsigntemplate_ListElement::setIEzsigntemplateSignaturetotal(const qint32 &i_ezsigntemplate_signaturetotal) {
    m_i_ezsigntemplate_signaturetotal = i_ezsigntemplate_signaturetotal;
    m_i_ezsigntemplate_signaturetotal_isSet = true;
}

bool Ezsigntemplate_ListElement::is_i_ezsigntemplate_signaturetotal_Set() const{
    return m_i_ezsigntemplate_signaturetotal_isSet;
}

bool Ezsigntemplate_ListElement::is_i_ezsigntemplate_signaturetotal_Valid() const{
    return m_i_ezsigntemplate_signaturetotal_isValid;
}

qint32 Ezsigntemplate_ListElement::getIEzsigntemplateFormfieldtotal() const {
    return m_i_ezsigntemplate_formfieldtotal;
}
void Ezsigntemplate_ListElement::setIEzsigntemplateFormfieldtotal(const qint32 &i_ezsigntemplate_formfieldtotal) {
    m_i_ezsigntemplate_formfieldtotal = i_ezsigntemplate_formfieldtotal;
    m_i_ezsigntemplate_formfieldtotal_isSet = true;
}

bool Ezsigntemplate_ListElement::is_i_ezsigntemplate_formfieldtotal_Set() const{
    return m_i_ezsigntemplate_formfieldtotal_isSet;
}

bool Ezsigntemplate_ListElement::is_i_ezsigntemplate_formfieldtotal_Valid() const{
    return m_i_ezsigntemplate_formfieldtotal_isValid;
}

bool Ezsigntemplate_ListElement::isBEzsigntemplateIncomplete() const {
    return m_b_ezsigntemplate_incomplete;
}
void Ezsigntemplate_ListElement::setBEzsigntemplateIncomplete(const bool &b_ezsigntemplate_incomplete) {
    m_b_ezsigntemplate_incomplete = b_ezsigntemplate_incomplete;
    m_b_ezsigntemplate_incomplete_isSet = true;
}

bool Ezsigntemplate_ListElement::is_b_ezsigntemplate_incomplete_Set() const{
    return m_b_ezsigntemplate_incomplete_isSet;
}

bool Ezsigntemplate_ListElement::is_b_ezsigntemplate_incomplete_Valid() const{
    return m_b_ezsigntemplate_incomplete_isValid;
}

QString Ezsigntemplate_ListElement::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void Ezsigntemplate_ListElement::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool Ezsigntemplate_ListElement::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool Ezsigntemplate_ListElement::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

Field_eEzsigntemplateType Ezsigntemplate_ListElement::getEEzsigntemplateType() const {
    return m_e_ezsigntemplate_type;
}
void Ezsigntemplate_ListElement::setEEzsigntemplateType(const Field_eEzsigntemplateType &e_ezsigntemplate_type) {
    m_e_ezsigntemplate_type = e_ezsigntemplate_type;
    m_e_ezsigntemplate_type_isSet = true;
}

bool Ezsigntemplate_ListElement::is_e_ezsigntemplate_type_Set() const{
    return m_e_ezsigntemplate_type_isSet;
}

bool Ezsigntemplate_ListElement::is_e_ezsigntemplate_type_Valid() const{
    return m_e_ezsigntemplate_type_isValid;
}

bool Ezsigntemplate_ListElement::isSet() const {
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

        if (m_e_ezsigntemplate_type.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplate_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplate_id_isValid && m_fki_language_id_isValid && m_s_ezsigntemplate_description_isValid && m_b_ezsigntemplate_incomplete_isValid && m_e_ezsigntemplate_type_isValid && true;
}

} // namespace Ezmaxapi