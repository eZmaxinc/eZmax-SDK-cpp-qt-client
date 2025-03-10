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

#include "Ezsigntemplatedocumentpagerecognition_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatedocumentpagerecognition_ResponseCompound::Ezsigntemplatedocumentpagerecognition_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatedocumentpagerecognition_ResponseCompound::Ezsigntemplatedocumentpagerecognition_ResponseCompound() {
    this->initializeModel();
}

Ezsigntemplatedocumentpagerecognition_ResponseCompound::~Ezsigntemplatedocumentpagerecognition_ResponseCompound() {}

void Ezsigntemplatedocumentpagerecognition_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplatedocumentpagerecognition_id_isSet = false;
    m_pki_ezsigntemplatedocumentpagerecognition_id_isValid = false;

    m_fki_ezsigntemplatedocumentpage_id_isSet = false;
    m_fki_ezsigntemplatedocumentpage_id_isValid = false;

    m_e_ezsigntemplatedocumentpagerecognition_operator_isSet = false;
    m_e_ezsigntemplatedocumentpagerecognition_operator_isValid = false;

    m_e_ezsigntemplatedocumentpagerecognition_section_isSet = false;
    m_e_ezsigntemplatedocumentpagerecognition_section_isValid = false;

    m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isSet = false;
    m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isValid = false;

    m_i_ezsigntemplatedocumentpagerecognition_x_isSet = false;
    m_i_ezsigntemplatedocumentpagerecognition_x_isValid = false;

    m_i_ezsigntemplatedocumentpagerecognition_y_isSet = false;
    m_i_ezsigntemplatedocumentpagerecognition_y_isValid = false;

    m_i_ezsigntemplatedocumentpagerecognition_width_isSet = false;
    m_i_ezsigntemplatedocumentpagerecognition_width_isValid = false;

    m_i_ezsigntemplatedocumentpagerecognition_height_isSet = false;
    m_i_ezsigntemplatedocumentpagerecognition_height_isValid = false;

    m_t_ezsigntemplatedocumentpagerecognition_text_isSet = false;
    m_t_ezsigntemplatedocumentpagerecognition_text_isValid = false;
}

void Ezsigntemplatedocumentpagerecognition_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatedocumentpagerecognition_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatedocumentpagerecognition_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatedocumentpagerecognition_id, json[QString("pkiEzsigntemplatedocumentpagerecognitionID")]);
    m_pki_ezsigntemplatedocumentpagerecognition_id_isSet = !json[QString("pkiEzsigntemplatedocumentpagerecognitionID")].isNull() && m_pki_ezsigntemplatedocumentpagerecognition_id_isValid;

    m_fki_ezsigntemplatedocumentpage_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatedocumentpage_id, json[QString("fkiEzsigntemplatedocumentpageID")]);
    m_fki_ezsigntemplatedocumentpage_id_isSet = !json[QString("fkiEzsigntemplatedocumentpageID")].isNull() && m_fki_ezsigntemplatedocumentpage_id_isValid;

    m_e_ezsigntemplatedocumentpagerecognition_operator_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplatedocumentpagerecognition_operator, json[QString("eEzsigntemplatedocumentpagerecognitionOperator")]);
    m_e_ezsigntemplatedocumentpagerecognition_operator_isSet = !json[QString("eEzsigntemplatedocumentpagerecognitionOperator")].isNull() && m_e_ezsigntemplatedocumentpagerecognition_operator_isValid;

    m_e_ezsigntemplatedocumentpagerecognition_section_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplatedocumentpagerecognition_section, json[QString("eEzsigntemplatedocumentpagerecognitionSection")]);
    m_e_ezsigntemplatedocumentpagerecognition_section_isSet = !json[QString("eEzsigntemplatedocumentpagerecognitionSection")].isNull() && m_e_ezsigntemplatedocumentpagerecognition_section_isValid;

    m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpagerecognition_similarpercentage, json[QString("iEzsigntemplatedocumentpagerecognitionSimilarpercentage")]);
    m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isSet = !json[QString("iEzsigntemplatedocumentpagerecognitionSimilarpercentage")].isNull() && m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isValid;

    m_i_ezsigntemplatedocumentpagerecognition_x_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpagerecognition_x, json[QString("iEzsigntemplatedocumentpagerecognitionX")]);
    m_i_ezsigntemplatedocumentpagerecognition_x_isSet = !json[QString("iEzsigntemplatedocumentpagerecognitionX")].isNull() && m_i_ezsigntemplatedocumentpagerecognition_x_isValid;

    m_i_ezsigntemplatedocumentpagerecognition_y_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpagerecognition_y, json[QString("iEzsigntemplatedocumentpagerecognitionY")]);
    m_i_ezsigntemplatedocumentpagerecognition_y_isSet = !json[QString("iEzsigntemplatedocumentpagerecognitionY")].isNull() && m_i_ezsigntemplatedocumentpagerecognition_y_isValid;

    m_i_ezsigntemplatedocumentpagerecognition_width_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpagerecognition_width, json[QString("iEzsigntemplatedocumentpagerecognitionWidth")]);
    m_i_ezsigntemplatedocumentpagerecognition_width_isSet = !json[QString("iEzsigntemplatedocumentpagerecognitionWidth")].isNull() && m_i_ezsigntemplatedocumentpagerecognition_width_isValid;

    m_i_ezsigntemplatedocumentpagerecognition_height_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpagerecognition_height, json[QString("iEzsigntemplatedocumentpagerecognitionHeight")]);
    m_i_ezsigntemplatedocumentpagerecognition_height_isSet = !json[QString("iEzsigntemplatedocumentpagerecognitionHeight")].isNull() && m_i_ezsigntemplatedocumentpagerecognition_height_isValid;

    m_t_ezsigntemplatedocumentpagerecognition_text_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsigntemplatedocumentpagerecognition_text, json[QString("tEzsigntemplatedocumentpagerecognitionText")]);
    m_t_ezsigntemplatedocumentpagerecognition_text_isSet = !json[QString("tEzsigntemplatedocumentpagerecognitionText")].isNull() && m_t_ezsigntemplatedocumentpagerecognition_text_isValid;
}

QString Ezsigntemplatedocumentpagerecognition_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatedocumentpagerecognition_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatedocumentpagerecognition_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatedocumentpagerecognitionID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatedocumentpagerecognition_id));
    }
    if (m_fki_ezsigntemplatedocumentpage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatedocumentpageID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatedocumentpage_id));
    }
    if (m_e_ezsigntemplatedocumentpagerecognition_operator.isSet()) {
        obj.insert(QString("eEzsigntemplatedocumentpagerecognitionOperator"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplatedocumentpagerecognition_operator));
    }
    if (m_e_ezsigntemplatedocumentpagerecognition_section.isSet()) {
        obj.insert(QString("eEzsigntemplatedocumentpagerecognitionSection"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplatedocumentpagerecognition_section));
    }
    if (m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagerecognitionSimilarpercentage"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpagerecognition_similarpercentage));
    }
    if (m_i_ezsigntemplatedocumentpagerecognition_x_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagerecognitionX"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpagerecognition_x));
    }
    if (m_i_ezsigntemplatedocumentpagerecognition_y_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagerecognitionY"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpagerecognition_y));
    }
    if (m_i_ezsigntemplatedocumentpagerecognition_width_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagerecognitionWidth"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpagerecognition_width));
    }
    if (m_i_ezsigntemplatedocumentpagerecognition_height_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagerecognitionHeight"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpagerecognition_height));
    }
    if (m_t_ezsigntemplatedocumentpagerecognition_text_isSet) {
        obj.insert(QString("tEzsigntemplatedocumentpagerecognitionText"), ::Ezmaxapi::toJsonValue(m_t_ezsigntemplatedocumentpagerecognition_text));
    }
    return obj;
}

qint32 Ezsigntemplatedocumentpagerecognition_ResponseCompound::getPkiEzsigntemplatedocumentpagerecognitionId() const {
    return m_pki_ezsigntemplatedocumentpagerecognition_id;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setPkiEzsigntemplatedocumentpagerecognitionId(const qint32 &pki_ezsigntemplatedocumentpagerecognition_id) {
    m_pki_ezsigntemplatedocumentpagerecognition_id = pki_ezsigntemplatedocumentpagerecognition_id;
    m_pki_ezsigntemplatedocumentpagerecognition_id_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_pki_ezsigntemplatedocumentpagerecognition_id_Set() const{
    return m_pki_ezsigntemplatedocumentpagerecognition_id_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_pki_ezsigntemplatedocumentpagerecognition_id_Valid() const{
    return m_pki_ezsigntemplatedocumentpagerecognition_id_isValid;
}

qint32 Ezsigntemplatedocumentpagerecognition_ResponseCompound::getFkiEzsigntemplatedocumentpageId() const {
    return m_fki_ezsigntemplatedocumentpage_id;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setFkiEzsigntemplatedocumentpageId(const qint32 &fki_ezsigntemplatedocumentpage_id) {
    m_fki_ezsigntemplatedocumentpage_id = fki_ezsigntemplatedocumentpage_id;
    m_fki_ezsigntemplatedocumentpage_id_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_fki_ezsigntemplatedocumentpage_id_Set() const{
    return m_fki_ezsigntemplatedocumentpage_id_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_fki_ezsigntemplatedocumentpage_id_Valid() const{
    return m_fki_ezsigntemplatedocumentpage_id_isValid;
}

Field_eEzsigntemplatedocumentpagerecognitionOperator Ezsigntemplatedocumentpagerecognition_ResponseCompound::getEEzsigntemplatedocumentpagerecognitionOperator() const {
    return m_e_ezsigntemplatedocumentpagerecognition_operator;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setEEzsigntemplatedocumentpagerecognitionOperator(const Field_eEzsigntemplatedocumentpagerecognitionOperator &e_ezsigntemplatedocumentpagerecognition_operator) {
    m_e_ezsigntemplatedocumentpagerecognition_operator = e_ezsigntemplatedocumentpagerecognition_operator;
    m_e_ezsigntemplatedocumentpagerecognition_operator_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_e_ezsigntemplatedocumentpagerecognition_operator_Set() const{
    return m_e_ezsigntemplatedocumentpagerecognition_operator_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_e_ezsigntemplatedocumentpagerecognition_operator_Valid() const{
    return m_e_ezsigntemplatedocumentpagerecognition_operator_isValid;
}

Field_eEzsigntemplatedocumentpagerecognitionSection Ezsigntemplatedocumentpagerecognition_ResponseCompound::getEEzsigntemplatedocumentpagerecognitionSection() const {
    return m_e_ezsigntemplatedocumentpagerecognition_section;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setEEzsigntemplatedocumentpagerecognitionSection(const Field_eEzsigntemplatedocumentpagerecognitionSection &e_ezsigntemplatedocumentpagerecognition_section) {
    m_e_ezsigntemplatedocumentpagerecognition_section = e_ezsigntemplatedocumentpagerecognition_section;
    m_e_ezsigntemplatedocumentpagerecognition_section_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_e_ezsigntemplatedocumentpagerecognition_section_Set() const{
    return m_e_ezsigntemplatedocumentpagerecognition_section_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_e_ezsigntemplatedocumentpagerecognition_section_Valid() const{
    return m_e_ezsigntemplatedocumentpagerecognition_section_isValid;
}

qint32 Ezsigntemplatedocumentpagerecognition_ResponseCompound::getIEzsigntemplatedocumentpagerecognitionSimilarpercentage() const {
    return m_i_ezsigntemplatedocumentpagerecognition_similarpercentage;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setIEzsigntemplatedocumentpagerecognitionSimilarpercentage(const qint32 &i_ezsigntemplatedocumentpagerecognition_similarpercentage) {
    m_i_ezsigntemplatedocumentpagerecognition_similarpercentage = i_ezsigntemplatedocumentpagerecognition_similarpercentage;
    m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_similarpercentage_Set() const{
    return m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_similarpercentage_Valid() const{
    return m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isValid;
}

qint32 Ezsigntemplatedocumentpagerecognition_ResponseCompound::getIEzsigntemplatedocumentpagerecognitionX() const {
    return m_i_ezsigntemplatedocumentpagerecognition_x;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setIEzsigntemplatedocumentpagerecognitionX(const qint32 &i_ezsigntemplatedocumentpagerecognition_x) {
    m_i_ezsigntemplatedocumentpagerecognition_x = i_ezsigntemplatedocumentpagerecognition_x;
    m_i_ezsigntemplatedocumentpagerecognition_x_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_x_Set() const{
    return m_i_ezsigntemplatedocumentpagerecognition_x_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_x_Valid() const{
    return m_i_ezsigntemplatedocumentpagerecognition_x_isValid;
}

qint32 Ezsigntemplatedocumentpagerecognition_ResponseCompound::getIEzsigntemplatedocumentpagerecognitionY() const {
    return m_i_ezsigntemplatedocumentpagerecognition_y;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setIEzsigntemplatedocumentpagerecognitionY(const qint32 &i_ezsigntemplatedocumentpagerecognition_y) {
    m_i_ezsigntemplatedocumentpagerecognition_y = i_ezsigntemplatedocumentpagerecognition_y;
    m_i_ezsigntemplatedocumentpagerecognition_y_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_y_Set() const{
    return m_i_ezsigntemplatedocumentpagerecognition_y_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_y_Valid() const{
    return m_i_ezsigntemplatedocumentpagerecognition_y_isValid;
}

qint32 Ezsigntemplatedocumentpagerecognition_ResponseCompound::getIEzsigntemplatedocumentpagerecognitionWidth() const {
    return m_i_ezsigntemplatedocumentpagerecognition_width;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setIEzsigntemplatedocumentpagerecognitionWidth(const qint32 &i_ezsigntemplatedocumentpagerecognition_width) {
    m_i_ezsigntemplatedocumentpagerecognition_width = i_ezsigntemplatedocumentpagerecognition_width;
    m_i_ezsigntemplatedocumentpagerecognition_width_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_width_Set() const{
    return m_i_ezsigntemplatedocumentpagerecognition_width_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_width_Valid() const{
    return m_i_ezsigntemplatedocumentpagerecognition_width_isValid;
}

qint32 Ezsigntemplatedocumentpagerecognition_ResponseCompound::getIEzsigntemplatedocumentpagerecognitionHeight() const {
    return m_i_ezsigntemplatedocumentpagerecognition_height;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setIEzsigntemplatedocumentpagerecognitionHeight(const qint32 &i_ezsigntemplatedocumentpagerecognition_height) {
    m_i_ezsigntemplatedocumentpagerecognition_height = i_ezsigntemplatedocumentpagerecognition_height;
    m_i_ezsigntemplatedocumentpagerecognition_height_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_height_Set() const{
    return m_i_ezsigntemplatedocumentpagerecognition_height_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_i_ezsigntemplatedocumentpagerecognition_height_Valid() const{
    return m_i_ezsigntemplatedocumentpagerecognition_height_isValid;
}

QString Ezsigntemplatedocumentpagerecognition_ResponseCompound::getTEzsigntemplatedocumentpagerecognitionText() const {
    return m_t_ezsigntemplatedocumentpagerecognition_text;
}
void Ezsigntemplatedocumentpagerecognition_ResponseCompound::setTEzsigntemplatedocumentpagerecognitionText(const QString &t_ezsigntemplatedocumentpagerecognition_text) {
    m_t_ezsigntemplatedocumentpagerecognition_text = t_ezsigntemplatedocumentpagerecognition_text;
    m_t_ezsigntemplatedocumentpagerecognition_text_isSet = true;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_t_ezsigntemplatedocumentpagerecognition_text_Set() const{
    return m_t_ezsigntemplatedocumentpagerecognition_text_isSet;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::is_t_ezsigntemplatedocumentpagerecognition_text_Valid() const{
    return m_t_ezsigntemplatedocumentpagerecognition_text_isValid;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatedocumentpagerecognition_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatedocumentpage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatedocumentpagerecognition_operator.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatedocumentpagerecognition_section.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpagerecognition_similarpercentage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpagerecognition_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpagerecognition_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpagerecognition_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpagerecognition_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsigntemplatedocumentpagerecognition_text_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatedocumentpagerecognition_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatedocumentpagerecognition_id_isValid && m_fki_ezsigntemplatedocumentpage_id_isValid && m_e_ezsigntemplatedocumentpagerecognition_operator_isValid && m_e_ezsigntemplatedocumentpagerecognition_section_isValid && m_t_ezsigntemplatedocumentpagerecognition_text_isValid && true;
}

} // namespace Ezmaxapi
