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

#include "Ezsignformfield_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignformfield_RequestCompound::Ezsignformfield_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignformfield_RequestCompound::Ezsignformfield_RequestCompound() {
    this->initializeModel();
}

Ezsignformfield_RequestCompound::~Ezsignformfield_RequestCompound() {}

void Ezsignformfield_RequestCompound::initializeModel() {

    m_pki_ezsignformfield_id_isSet = false;
    m_pki_ezsignformfield_id_isValid = false;

    m_i_ezsignpage_pagenumber_isSet = false;
    m_i_ezsignpage_pagenumber_isValid = false;

    m_s_ezsignformfield_label_isSet = false;
    m_s_ezsignformfield_label_isValid = false;

    m_s_ezsignformfield_value_isSet = false;
    m_s_ezsignformfield_value_isValid = false;

    m_i_ezsignformfield_x_isSet = false;
    m_i_ezsignformfield_x_isValid = false;

    m_i_ezsignformfield_y_isSet = false;
    m_i_ezsignformfield_y_isValid = false;

    m_i_ezsignformfield_width_isSet = false;
    m_i_ezsignformfield_width_isValid = false;

    m_i_ezsignformfield_height_isSet = false;
    m_i_ezsignformfield_height_isValid = false;

    m_b_ezsignformfield_autocomplete_isSet = false;
    m_b_ezsignformfield_autocomplete_isValid = false;

    m_b_ezsignformfield_selected_isSet = false;
    m_b_ezsignformfield_selected_isValid = false;

    m_s_ezsignformfield_enteredvalue_isSet = false;
    m_s_ezsignformfield_enteredvalue_isValid = false;
}

void Ezsignformfield_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignformfield_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignformfield_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignformfield_id, json[QString("pkiEzsignformfieldID")]);
    m_pki_ezsignformfield_id_isSet = !json[QString("pkiEzsignformfieldID")].isNull() && m_pki_ezsignformfield_id_isValid;

    m_i_ezsignpage_pagenumber_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignpage_pagenumber, json[QString("iEzsignpagePagenumber")]);
    m_i_ezsignpage_pagenumber_isSet = !json[QString("iEzsignpagePagenumber")].isNull() && m_i_ezsignpage_pagenumber_isValid;

    m_s_ezsignformfield_label_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfield_label, json[QString("sEzsignformfieldLabel")]);
    m_s_ezsignformfield_label_isSet = !json[QString("sEzsignformfieldLabel")].isNull() && m_s_ezsignformfield_label_isValid;

    m_s_ezsignformfield_value_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfield_value, json[QString("sEzsignformfieldValue")]);
    m_s_ezsignformfield_value_isSet = !json[QString("sEzsignformfieldValue")].isNull() && m_s_ezsignformfield_value_isValid;

    m_i_ezsignformfield_x_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignformfield_x, json[QString("iEzsignformfieldX")]);
    m_i_ezsignformfield_x_isSet = !json[QString("iEzsignformfieldX")].isNull() && m_i_ezsignformfield_x_isValid;

    m_i_ezsignformfield_y_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignformfield_y, json[QString("iEzsignformfieldY")]);
    m_i_ezsignformfield_y_isSet = !json[QString("iEzsignformfieldY")].isNull() && m_i_ezsignformfield_y_isValid;

    m_i_ezsignformfield_width_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignformfield_width, json[QString("iEzsignformfieldWidth")]);
    m_i_ezsignformfield_width_isSet = !json[QString("iEzsignformfieldWidth")].isNull() && m_i_ezsignformfield_width_isValid;

    m_i_ezsignformfield_height_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignformfield_height, json[QString("iEzsignformfieldHeight")]);
    m_i_ezsignformfield_height_isSet = !json[QString("iEzsignformfieldHeight")].isNull() && m_i_ezsignformfield_height_isValid;

    m_b_ezsignformfield_autocomplete_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignformfield_autocomplete, json[QString("bEzsignformfieldAutocomplete")]);
    m_b_ezsignformfield_autocomplete_isSet = !json[QString("bEzsignformfieldAutocomplete")].isNull() && m_b_ezsignformfield_autocomplete_isValid;

    m_b_ezsignformfield_selected_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignformfield_selected, json[QString("bEzsignformfieldSelected")]);
    m_b_ezsignformfield_selected_isSet = !json[QString("bEzsignformfieldSelected")].isNull() && m_b_ezsignformfield_selected_isValid;

    m_s_ezsignformfield_enteredvalue_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfield_enteredvalue, json[QString("sEzsignformfieldEnteredvalue")]);
    m_s_ezsignformfield_enteredvalue_isSet = !json[QString("sEzsignformfieldEnteredvalue")].isNull() && m_s_ezsignformfield_enteredvalue_isValid;
}

QString Ezsignformfield_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignformfield_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignformfield_id_isSet) {
        obj.insert(QString("pkiEzsignformfieldID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignformfield_id));
    }
    if (m_i_ezsignpage_pagenumber_isSet) {
        obj.insert(QString("iEzsignpagePagenumber"), ::Ezmaxapi::toJsonValue(m_i_ezsignpage_pagenumber));
    }
    if (m_s_ezsignformfield_label_isSet) {
        obj.insert(QString("sEzsignformfieldLabel"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfield_label));
    }
    if (m_s_ezsignformfield_value_isSet) {
        obj.insert(QString("sEzsignformfieldValue"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfield_value));
    }
    if (m_i_ezsignformfield_x_isSet) {
        obj.insert(QString("iEzsignformfieldX"), ::Ezmaxapi::toJsonValue(m_i_ezsignformfield_x));
    }
    if (m_i_ezsignformfield_y_isSet) {
        obj.insert(QString("iEzsignformfieldY"), ::Ezmaxapi::toJsonValue(m_i_ezsignformfield_y));
    }
    if (m_i_ezsignformfield_width_isSet) {
        obj.insert(QString("iEzsignformfieldWidth"), ::Ezmaxapi::toJsonValue(m_i_ezsignformfield_width));
    }
    if (m_i_ezsignformfield_height_isSet) {
        obj.insert(QString("iEzsignformfieldHeight"), ::Ezmaxapi::toJsonValue(m_i_ezsignformfield_height));
    }
    if (m_b_ezsignformfield_autocomplete_isSet) {
        obj.insert(QString("bEzsignformfieldAutocomplete"), ::Ezmaxapi::toJsonValue(m_b_ezsignformfield_autocomplete));
    }
    if (m_b_ezsignformfield_selected_isSet) {
        obj.insert(QString("bEzsignformfieldSelected"), ::Ezmaxapi::toJsonValue(m_b_ezsignformfield_selected));
    }
    if (m_s_ezsignformfield_enteredvalue_isSet) {
        obj.insert(QString("sEzsignformfieldEnteredvalue"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfield_enteredvalue));
    }
    return obj;
}

qint32 Ezsignformfield_RequestCompound::getPkiEzsignformfieldId() const {
    return m_pki_ezsignformfield_id;
}
void Ezsignformfield_RequestCompound::setPkiEzsignformfieldId(const qint32 &pki_ezsignformfield_id) {
    m_pki_ezsignformfield_id = pki_ezsignformfield_id;
    m_pki_ezsignformfield_id_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_pki_ezsignformfield_id_Set() const{
    return m_pki_ezsignformfield_id_isSet;
}

bool Ezsignformfield_RequestCompound::is_pki_ezsignformfield_id_Valid() const{
    return m_pki_ezsignformfield_id_isValid;
}

qint32 Ezsignformfield_RequestCompound::getIEzsignpagePagenumber() const {
    return m_i_ezsignpage_pagenumber;
}
void Ezsignformfield_RequestCompound::setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber) {
    m_i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    m_i_ezsignpage_pagenumber_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignpage_pagenumber_Set() const{
    return m_i_ezsignpage_pagenumber_isSet;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignpage_pagenumber_Valid() const{
    return m_i_ezsignpage_pagenumber_isValid;
}

QString Ezsignformfield_RequestCompound::getSEzsignformfieldLabel() const {
    return m_s_ezsignformfield_label;
}
void Ezsignformfield_RequestCompound::setSEzsignformfieldLabel(const QString &s_ezsignformfield_label) {
    m_s_ezsignformfield_label = s_ezsignformfield_label;
    m_s_ezsignformfield_label_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_s_ezsignformfield_label_Set() const{
    return m_s_ezsignformfield_label_isSet;
}

bool Ezsignformfield_RequestCompound::is_s_ezsignformfield_label_Valid() const{
    return m_s_ezsignformfield_label_isValid;
}

QString Ezsignformfield_RequestCompound::getSEzsignformfieldValue() const {
    return m_s_ezsignformfield_value;
}
void Ezsignformfield_RequestCompound::setSEzsignformfieldValue(const QString &s_ezsignformfield_value) {
    m_s_ezsignformfield_value = s_ezsignformfield_value;
    m_s_ezsignformfield_value_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_s_ezsignformfield_value_Set() const{
    return m_s_ezsignformfield_value_isSet;
}

bool Ezsignformfield_RequestCompound::is_s_ezsignformfield_value_Valid() const{
    return m_s_ezsignformfield_value_isValid;
}

qint32 Ezsignformfield_RequestCompound::getIEzsignformfieldX() const {
    return m_i_ezsignformfield_x;
}
void Ezsignformfield_RequestCompound::setIEzsignformfieldX(const qint32 &i_ezsignformfield_x) {
    m_i_ezsignformfield_x = i_ezsignformfield_x;
    m_i_ezsignformfield_x_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignformfield_x_Set() const{
    return m_i_ezsignformfield_x_isSet;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignformfield_x_Valid() const{
    return m_i_ezsignformfield_x_isValid;
}

qint32 Ezsignformfield_RequestCompound::getIEzsignformfieldY() const {
    return m_i_ezsignformfield_y;
}
void Ezsignformfield_RequestCompound::setIEzsignformfieldY(const qint32 &i_ezsignformfield_y) {
    m_i_ezsignformfield_y = i_ezsignformfield_y;
    m_i_ezsignformfield_y_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignformfield_y_Set() const{
    return m_i_ezsignformfield_y_isSet;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignformfield_y_Valid() const{
    return m_i_ezsignformfield_y_isValid;
}

qint32 Ezsignformfield_RequestCompound::getIEzsignformfieldWidth() const {
    return m_i_ezsignformfield_width;
}
void Ezsignformfield_RequestCompound::setIEzsignformfieldWidth(const qint32 &i_ezsignformfield_width) {
    m_i_ezsignformfield_width = i_ezsignformfield_width;
    m_i_ezsignformfield_width_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignformfield_width_Set() const{
    return m_i_ezsignformfield_width_isSet;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignformfield_width_Valid() const{
    return m_i_ezsignformfield_width_isValid;
}

qint32 Ezsignformfield_RequestCompound::getIEzsignformfieldHeight() const {
    return m_i_ezsignformfield_height;
}
void Ezsignformfield_RequestCompound::setIEzsignformfieldHeight(const qint32 &i_ezsignformfield_height) {
    m_i_ezsignformfield_height = i_ezsignformfield_height;
    m_i_ezsignformfield_height_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignformfield_height_Set() const{
    return m_i_ezsignformfield_height_isSet;
}

bool Ezsignformfield_RequestCompound::is_i_ezsignformfield_height_Valid() const{
    return m_i_ezsignformfield_height_isValid;
}

bool Ezsignformfield_RequestCompound::isBEzsignformfieldAutocomplete() const {
    return m_b_ezsignformfield_autocomplete;
}
void Ezsignformfield_RequestCompound::setBEzsignformfieldAutocomplete(const bool &b_ezsignformfield_autocomplete) {
    m_b_ezsignformfield_autocomplete = b_ezsignformfield_autocomplete;
    m_b_ezsignformfield_autocomplete_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_b_ezsignformfield_autocomplete_Set() const{
    return m_b_ezsignformfield_autocomplete_isSet;
}

bool Ezsignformfield_RequestCompound::is_b_ezsignformfield_autocomplete_Valid() const{
    return m_b_ezsignformfield_autocomplete_isValid;
}

bool Ezsignformfield_RequestCompound::isBEzsignformfieldSelected() const {
    return m_b_ezsignformfield_selected;
}
void Ezsignformfield_RequestCompound::setBEzsignformfieldSelected(const bool &b_ezsignformfield_selected) {
    m_b_ezsignformfield_selected = b_ezsignformfield_selected;
    m_b_ezsignformfield_selected_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_b_ezsignformfield_selected_Set() const{
    return m_b_ezsignformfield_selected_isSet;
}

bool Ezsignformfield_RequestCompound::is_b_ezsignformfield_selected_Valid() const{
    return m_b_ezsignformfield_selected_isValid;
}

QString Ezsignformfield_RequestCompound::getSEzsignformfieldEnteredvalue() const {
    return m_s_ezsignformfield_enteredvalue;
}
void Ezsignformfield_RequestCompound::setSEzsignformfieldEnteredvalue(const QString &s_ezsignformfield_enteredvalue) {
    m_s_ezsignformfield_enteredvalue = s_ezsignformfield_enteredvalue;
    m_s_ezsignformfield_enteredvalue_isSet = true;
}

bool Ezsignformfield_RequestCompound::is_s_ezsignformfield_enteredvalue_Set() const{
    return m_s_ezsignformfield_enteredvalue_isSet;
}

bool Ezsignformfield_RequestCompound::is_s_ezsignformfield_enteredvalue_Valid() const{
    return m_s_ezsignformfield_enteredvalue_isValid;
}

bool Ezsignformfield_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignformfield_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfield_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfield_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfield_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfield_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfield_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfield_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignformfield_autocomplete_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignformfield_selected_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfield_enteredvalue_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignformfield_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_ezsignpage_pagenumber_isValid && m_s_ezsignformfield_label_isValid && m_i_ezsignformfield_x_isValid && m_i_ezsignformfield_y_isValid && m_i_ezsignformfield_width_isValid && m_i_ezsignformfield_height_isValid && true;
}

} // namespace Ezmaxapi
