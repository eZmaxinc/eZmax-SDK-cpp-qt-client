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

#include "Ezsignformfield_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignformfield_Request::Ezsignformfield_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignformfield_Request::Ezsignformfield_Request() {
    this->initializeModel();
}

Ezsignformfield_Request::~Ezsignformfield_Request() {}

void Ezsignformfield_Request::initializeModel() {

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

    m_b_ezsignformfield_selected_isSet = false;
    m_b_ezsignformfield_selected_isValid = false;

    m_s_ezsignformfield_enteredvalue_isSet = false;
    m_s_ezsignformfield_enteredvalue_isValid = false;
}

void Ezsignformfield_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignformfield_Request::fromJsonObject(QJsonObject json) {

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

    m_b_ezsignformfield_selected_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignformfield_selected, json[QString("bEzsignformfieldSelected")]);
    m_b_ezsignformfield_selected_isSet = !json[QString("bEzsignformfieldSelected")].isNull() && m_b_ezsignformfield_selected_isValid;

    m_s_ezsignformfield_enteredvalue_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfield_enteredvalue, json[QString("sEzsignformfieldEnteredvalue")]);
    m_s_ezsignformfield_enteredvalue_isSet = !json[QString("sEzsignformfieldEnteredvalue")].isNull() && m_s_ezsignformfield_enteredvalue_isValid;
}

QString Ezsignformfield_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignformfield_Request::asJsonObject() const {
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
    if (m_b_ezsignformfield_selected_isSet) {
        obj.insert(QString("bEzsignformfieldSelected"), ::Ezmaxapi::toJsonValue(m_b_ezsignformfield_selected));
    }
    if (m_s_ezsignformfield_enteredvalue_isSet) {
        obj.insert(QString("sEzsignformfieldEnteredvalue"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfield_enteredvalue));
    }
    return obj;
}

qint32 Ezsignformfield_Request::getPkiEzsignformfieldId() const {
    return m_pki_ezsignformfield_id;
}
void Ezsignformfield_Request::setPkiEzsignformfieldId(const qint32 &pki_ezsignformfield_id) {
    m_pki_ezsignformfield_id = pki_ezsignformfield_id;
    m_pki_ezsignformfield_id_isSet = true;
}

bool Ezsignformfield_Request::is_pki_ezsignformfield_id_Set() const{
    return m_pki_ezsignformfield_id_isSet;
}

bool Ezsignformfield_Request::is_pki_ezsignformfield_id_Valid() const{
    return m_pki_ezsignformfield_id_isValid;
}

qint32 Ezsignformfield_Request::getIEzsignpagePagenumber() const {
    return m_i_ezsignpage_pagenumber;
}
void Ezsignformfield_Request::setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber) {
    m_i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    m_i_ezsignpage_pagenumber_isSet = true;
}

bool Ezsignformfield_Request::is_i_ezsignpage_pagenumber_Set() const{
    return m_i_ezsignpage_pagenumber_isSet;
}

bool Ezsignformfield_Request::is_i_ezsignpage_pagenumber_Valid() const{
    return m_i_ezsignpage_pagenumber_isValid;
}

QString Ezsignformfield_Request::getSEzsignformfieldLabel() const {
    return m_s_ezsignformfield_label;
}
void Ezsignformfield_Request::setSEzsignformfieldLabel(const QString &s_ezsignformfield_label) {
    m_s_ezsignformfield_label = s_ezsignformfield_label;
    m_s_ezsignformfield_label_isSet = true;
}

bool Ezsignformfield_Request::is_s_ezsignformfield_label_Set() const{
    return m_s_ezsignformfield_label_isSet;
}

bool Ezsignformfield_Request::is_s_ezsignformfield_label_Valid() const{
    return m_s_ezsignformfield_label_isValid;
}

QString Ezsignformfield_Request::getSEzsignformfieldValue() const {
    return m_s_ezsignformfield_value;
}
void Ezsignformfield_Request::setSEzsignformfieldValue(const QString &s_ezsignformfield_value) {
    m_s_ezsignformfield_value = s_ezsignformfield_value;
    m_s_ezsignformfield_value_isSet = true;
}

bool Ezsignformfield_Request::is_s_ezsignformfield_value_Set() const{
    return m_s_ezsignformfield_value_isSet;
}

bool Ezsignformfield_Request::is_s_ezsignformfield_value_Valid() const{
    return m_s_ezsignformfield_value_isValid;
}

qint32 Ezsignformfield_Request::getIEzsignformfieldX() const {
    return m_i_ezsignformfield_x;
}
void Ezsignformfield_Request::setIEzsignformfieldX(const qint32 &i_ezsignformfield_x) {
    m_i_ezsignformfield_x = i_ezsignformfield_x;
    m_i_ezsignformfield_x_isSet = true;
}

bool Ezsignformfield_Request::is_i_ezsignformfield_x_Set() const{
    return m_i_ezsignformfield_x_isSet;
}

bool Ezsignformfield_Request::is_i_ezsignformfield_x_Valid() const{
    return m_i_ezsignformfield_x_isValid;
}

qint32 Ezsignformfield_Request::getIEzsignformfieldY() const {
    return m_i_ezsignformfield_y;
}
void Ezsignformfield_Request::setIEzsignformfieldY(const qint32 &i_ezsignformfield_y) {
    m_i_ezsignformfield_y = i_ezsignformfield_y;
    m_i_ezsignformfield_y_isSet = true;
}

bool Ezsignformfield_Request::is_i_ezsignformfield_y_Set() const{
    return m_i_ezsignformfield_y_isSet;
}

bool Ezsignformfield_Request::is_i_ezsignformfield_y_Valid() const{
    return m_i_ezsignformfield_y_isValid;
}

qint32 Ezsignformfield_Request::getIEzsignformfieldWidth() const {
    return m_i_ezsignformfield_width;
}
void Ezsignformfield_Request::setIEzsignformfieldWidth(const qint32 &i_ezsignformfield_width) {
    m_i_ezsignformfield_width = i_ezsignformfield_width;
    m_i_ezsignformfield_width_isSet = true;
}

bool Ezsignformfield_Request::is_i_ezsignformfield_width_Set() const{
    return m_i_ezsignformfield_width_isSet;
}

bool Ezsignformfield_Request::is_i_ezsignformfield_width_Valid() const{
    return m_i_ezsignformfield_width_isValid;
}

qint32 Ezsignformfield_Request::getIEzsignformfieldHeight() const {
    return m_i_ezsignformfield_height;
}
void Ezsignformfield_Request::setIEzsignformfieldHeight(const qint32 &i_ezsignformfield_height) {
    m_i_ezsignformfield_height = i_ezsignformfield_height;
    m_i_ezsignformfield_height_isSet = true;
}

bool Ezsignformfield_Request::is_i_ezsignformfield_height_Set() const{
    return m_i_ezsignformfield_height_isSet;
}

bool Ezsignformfield_Request::is_i_ezsignformfield_height_Valid() const{
    return m_i_ezsignformfield_height_isValid;
}

bool Ezsignformfield_Request::isBEzsignformfieldSelected() const {
    return m_b_ezsignformfield_selected;
}
void Ezsignformfield_Request::setBEzsignformfieldSelected(const bool &b_ezsignformfield_selected) {
    m_b_ezsignformfield_selected = b_ezsignformfield_selected;
    m_b_ezsignformfield_selected_isSet = true;
}

bool Ezsignformfield_Request::is_b_ezsignformfield_selected_Set() const{
    return m_b_ezsignformfield_selected_isSet;
}

bool Ezsignformfield_Request::is_b_ezsignformfield_selected_Valid() const{
    return m_b_ezsignformfield_selected_isValid;
}

QString Ezsignformfield_Request::getSEzsignformfieldEnteredvalue() const {
    return m_s_ezsignformfield_enteredvalue;
}
void Ezsignformfield_Request::setSEzsignformfieldEnteredvalue(const QString &s_ezsignformfield_enteredvalue) {
    m_s_ezsignformfield_enteredvalue = s_ezsignformfield_enteredvalue;
    m_s_ezsignformfield_enteredvalue_isSet = true;
}

bool Ezsignformfield_Request::is_s_ezsignformfield_enteredvalue_Set() const{
    return m_s_ezsignformfield_enteredvalue_isSet;
}

bool Ezsignformfield_Request::is_s_ezsignformfield_enteredvalue_Valid() const{
    return m_s_ezsignformfield_enteredvalue_isValid;
}

bool Ezsignformfield_Request::isSet() const {
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

bool Ezsignformfield_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_ezsignpage_pagenumber_isValid && m_s_ezsignformfield_label_isValid && m_i_ezsignformfield_x_isValid && m_i_ezsignformfield_y_isValid && m_i_ezsignformfield_width_isValid && m_i_ezsignformfield_height_isValid && true;
}

} // namespace Ezmaxapi
